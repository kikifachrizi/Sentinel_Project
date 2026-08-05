#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>

#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <cerrno>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <atomic>
#include <limits>
#include <thread>
#include <vector>

// ─── Protocol constants ────────────────────────────────────────────────────
// Packet layout (N=8 samples, total 36 bytes):
//   [0]      0xAA          sync1
//   [1]      0x03          sync2
//   [2]      N             samples per packet (always 8)
//   [3-4]    speed         rotor speed (uint16 LE, internal units)
//   [5-6]    FSA           first sample angle (uint16 LE)
//   [7..30]  N × 3 bytes   dist_lo, dist_hi, intensity per sample
//   [31-32]  LSA           last sample angle (uint16 LE)
//   [33-34]  CRC           checksum (uint16 LE)
//   [35]     0x55          end byte
static constexpr uint8_t  SYNC1        = 0xAA;
static constexpr uint8_t  SYNC2        = 0x03;
static constexpr uint8_t  END_BYTE     = 0x55;
static constexpr uint8_t  N_SAMPLES    = 8;
static constexpr uint16_t DIST_INVALID = 0x8000;
static constexpr int      PACKET_SIZE  = 7 + N_SAMPLES * 3 + 4 + 1; // 36

// Raw angle unit → degrees.
// Empirically: raw/64 gives a monotonically increasing angle value;
// fmod with 360 maps it back to [0°, 360°).
static float raw_to_deg(uint16_t raw)
{
  return std::fmod(static_cast<float>(raw) / 64.0f, 360.0f);
}

// ─── ROS2 Node ─────────────────────────────────────────────────────────────
class DreameLdsNode : public rclcpp::Node
{
public:
  DreameLdsNode() : Node("dreame_lds")
  {
    declare_parameter("port",      "/dev/ttyUSB1");
    declare_parameter("baudrate",  115200);
    declare_parameter("frame_id",  "laser_frame");
    declare_parameter("range_min", 0.05);
    declare_parameter("range_max", 12.0);

    port_      = get_parameter("port").as_string();
    baudrate_  = static_cast<int>(get_parameter("baudrate").as_int());
    frame_id_  = get_parameter("frame_id").as_string();
    range_min_ = static_cast<float>(get_parameter("range_min").as_double());
    range_max_ = static_cast<float>(get_parameter("range_max").as_double());

    // Keep Last 1 + Reliable: kompatibel dengan semua subscriber standar ROS2,
    // depth 1 memastikan hanya scan terbaru yang di-queue (tidak menumpuk).
    scan_pub_ = create_publisher<sensor_msgs::msg::LaserScan>(
      "scan", rclcpp::QoS(rclcpp::KeepLast(1)).reliable().durability_volatile());

    // Pre-allocate so reallocation never stalls the reader thread
    accum_.reserve(512);
    buf_.reserve(4096);

    if (open_serial()) {
      running_ = true;
      reader_  = std::thread(&DreameLdsNode::read_worker, this);
      RCLCPP_INFO(get_logger(), "Dreame LDS driver started on %s", port_.c_str());
    }
  }

  ~DreameLdsNode() override
  {
    running_ = false;
    if (fd_ >= 0) { ::close(fd_); fd_ = -1; }
    if (reader_.joinable()) reader_.join();
  }

private:
  // ── Serial ───────────────────────────────────────────────────────────────
  bool open_serial()
  {
    fd_ = ::open(port_.c_str(), O_RDONLY | O_NOCTTY);
    if (fd_ < 0) {
      RCLCPP_ERROR(get_logger(), "Cannot open %s: %s", port_.c_str(), std::strerror(errno));
      return false;
    }

    struct termios tios{};
    tcgetattr(fd_, &tios);
    cfmakeraw(&tios);

    speed_t spd;
    switch (baudrate_) {
      case 230400: spd = B230400; break;
      case 460800: spd = B460800; break;
      default:     spd = B115200; break;
    }
    cfsetispeed(&tios, spd);
    cfsetospeed(&tios, spd);
    // Return from read() as soon as ≥1 byte is available, no timeout
    tios.c_cc[VMIN]  = 1;
    tios.c_cc[VTIME] = 0;
    tcsetattr(fd_, TCSANOW, &tios);
    return true;
  }

  // ── Reader thread ─────────────────────────────────────────────────────────
  void read_worker()
  {
    uint8_t chunk[256];
    while (running_) {
      ssize_t n = ::read(fd_, chunk, sizeof(chunk));
      if (n > 0) {
        buf_.insert(buf_.end(), chunk, chunk + n);
        // Guard against runaway buffer if no sync is found
        if (buf_.size() > 4096) {
          RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 5000,
            "Buffer overflow – check port/baudrate");
          buf_.clear();
        }
        process_buffer();
      } else if (n < 0 && errno != EINTR) {
        RCLCPP_ERROR(get_logger(), "Serial read error: %s", std::strerror(errno));
        break;
      }
    }
  }

  // ── Packet framing ────────────────────────────────────────────────────────
  // Uses a head index instead of erasing from the front (O(1) vs O(n)).
  // The raw vector is only compacted when head > half its size.
  void process_buffer()
  {
    auto avail = [&]() { return buf_.size() - head_; };

    while (avail() >= static_cast<size_t>(PACKET_SIZE)) {
      // Advance head to next SYNC1 SYNC2 pair
      while (avail() >= 2 &&
             !(buf_[head_] == SYNC1 && buf_[head_ + 1] == SYNC2)) {
        ++head_;
      }
      if (avail() < static_cast<size_t>(PACKET_SIZE)) break;

      // Validate N and end byte before consuming
      if (buf_[head_ + 2] != N_SAMPLES ||
          buf_[head_ + PACKET_SIZE - 1] != END_BYTE) {
        ++head_;
        continue;
      }

      parse_packet(&buf_[head_]);
      head_ += PACKET_SIZE;
    }

    // Compact only when head has consumed more than half the buffer
    if (head_ > buf_.size() / 2) {
      buf_.erase(buf_.begin(), buf_.begin() + head_);
      head_ = 0;
    }
  }

  // ── Sample extraction ─────────────────────────────────────────────────────
  void parse_packet(const uint8_t* p)
  {
    uint16_t fsa = static_cast<uint16_t>(p[5]) | (static_cast<uint16_t>(p[6]) << 8);
    uint16_t lsa = static_cast<uint16_t>(p[31]) | (static_cast<uint16_t>(p[32]) << 8);

    float a_start = raw_to_deg(fsa);
    float a_end   = raw_to_deg(lsa);

    // Backward jump >180° → full revolution complete
    if (!accum_.empty() && a_start < last_angle_ - 180.0f) {
      publish_scan();
      accum_.clear();
    }
    last_angle_ = a_end;

    // Interpolate angle for each sample between FSA and LSA
    float span = a_end - a_start;
    if (span < 0.0f) span += 360.0f;
    const float step = span / static_cast<float>(N_SAMPLES - 1);

    for (int i = 0; i < N_SAMPLES; ++i) {
      const int off = 7 + i * 3;
      uint16_t d_raw = static_cast<uint16_t>(p[off]) |
                       (static_cast<uint16_t>(p[off + 1]) << 8);

      float dist = (d_raw == DIST_INVALID || d_raw == 0)
                   ? std::numeric_limits<float>::infinity()
                   : static_cast<float>(d_raw) * 0.001f;

      float angle = a_start + static_cast<float>(i) * step;
      if (angle >= 360.0f) angle -= 360.0f;
      accum_.emplace_back(angle, dist);
    }
  }

  // ── LaserScan publish ─────────────────────────────────────────────────────
  void publish_scan()
  {
    if (accum_.size() < 2) return;

    std::sort(accum_.begin(), accum_.end(),
              [](const auto& a, const auto& b){ return a.first < b.first; });

    auto msg = sensor_msgs::msg::LaserScan();
    msg.header.stamp    = now();
    msg.header.frame_id = frame_id_;

    const float deg2rad = static_cast<float>(M_PI) / 180.0f;
    msg.angle_min       = accum_.front().first * deg2rad;
    msg.angle_max       = accum_.back().first  * deg2rad;
    msg.angle_increment = (msg.angle_max - msg.angle_min) /
                          static_cast<float>(accum_.size() - 1);
    msg.scan_time       = 0.1f;
    msg.time_increment  = 0.0f;
    msg.range_min       = range_min_;
    msg.range_max       = range_max_;

    msg.ranges.reserve(accum_.size());
    for (const auto& [angle, dist] : accum_) {
      msg.ranges.push_back(dist);
    }

    scan_pub_->publish(msg);
    RCLCPP_DEBUG(get_logger(), "Scan published: %zu points", accum_.size());
  }

  // ── Members ───────────────────────────────────────────────────────────────
  int         fd_{-1};
  std::string port_;
  std::string frame_id_;
  int         baudrate_;
  float       range_min_;
  float       range_max_;

  rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr scan_pub_;

  std::thread       reader_;
  std::atomic<bool> running_{false};

  std::vector<uint8_t>                  buf_;
  size_t                                head_{0};

  std::vector<std::pair<float, float>>  accum_;   // {angle_deg, dist_m}
  float                                 last_angle_{360.0f};
};

// ─── main ──────────────────────────────────────────────────────────────────
int main(int argc, char* argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<DreameLdsNode>());
  rclcpp::shutdown();
  return 0;
}
