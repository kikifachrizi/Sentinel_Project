#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <std_msgs/msg/int32.hpp>

#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <string>
#include <sstream>

class SentinelClassifierNode : public rclcpp::Node
{
public:
    SentinelClassifierNode() : Node("sentinel_classifier_node")
    {
        // Parameters
        this->declare_parameter("port", "/dev/ttyACM0");
        this->declare_parameter("baud_rate", 115200);

        port_ = this->get_parameter("port").as_string();
        baud_ = this->get_parameter("baud_rate").as_int();

        // Publishers
        pub_str_ = this->create_publisher<std_msgs::msg::String>(
            "/sentinel/class", 10);
        pub_id_ = this->create_publisher<std_msgs::msg::Int32>(
            "/sentinel/class_id", 10);

        // Open serial port
        if (!openPort()) {
            RCLCPP_ERROR(this->get_logger(),
                "Gagal membuka port %s", port_.c_str());
            return;
        }

        RCLCPP_INFO(this->get_logger(),
            "Membaca CLASSIFY dari %s @ %d baud", port_.c_str(), baud_);

        // Timer 10ms — baca serial tanpa blocking
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(10),
            std::bind(&SentinelClassifierNode::timerCallback, this));
    }

    ~SentinelClassifierNode()
    {
        if (fd_ >= 0) close(fd_);
    }

private:
    bool openPort()
    {
        fd_ = open(port_.c_str(), O_RDONLY | O_NOCTTY | O_NONBLOCK);
        if (fd_ < 0) return false;

        struct termios tty;
        if (tcgetattr(fd_, &tty) != 0) return false;

        // Baud rate
        speed_t spd = B115200;
        if (baud_ == 57600)  spd = B57600;
        if (baud_ == 38400)  spd = B38400;
        cfsetispeed(&tty, spd);
        cfsetospeed(&tty, spd);

        // 8N1, no flow control, raw mode
        cfmakeraw(&tty);
        tty.c_cflag |= (CLOCAL | CREAD);
        tty.c_cc[VMIN]  = 0;
        tty.c_cc[VTIME] = 0;

        tcsetattr(fd_, TCSANOW, &tty);
        tcflush(fd_, TCIFLUSH);
        return true;
    }

    void timerCallback()
    {
        char buf[128];
        ssize_t n = read(fd_, buf, sizeof(buf) - 1);
        if (n <= 0) return;

        buf[n] = '\0';
        rx_buf_ += std::string(buf, n);

        // Proses baris lengkap
        size_t pos;
        while ((pos = rx_buf_.find('\n')) != std::string::npos) {
            std::string line = rx_buf_.substr(0, pos);
            rx_buf_ = rx_buf_.substr(pos + 1);

            // Hapus \r kalau ada
            if (!line.empty() && line.back() == '\r')
                line.pop_back();

            parseLine(line);
        }
    }

    void parseLine(const std::string &line)
    {
        // Format: CLASSIFY,<id>,<name>
        if (line.rfind("CLASSIFY,", 0) != 0) return;

        std::stringstream ss(line.substr(9)); // skip "CLASSIFY,"
        std::string id_str, name;

        if (!std::getline(ss, id_str, ',')) return;
        if (!std::getline(ss, name))        return;

        int id = std::stoi(id_str);

        // Publish string
        auto msg_str = std_msgs::msg::String();
        msg_str.data = name;
        pub_str_->publish(msg_str);

        // Publish int
        auto msg_id = std_msgs::msg::Int32();
        msg_id.data = id;
        pub_id_->publish(msg_id);

        RCLCPP_INFO(this->get_logger(),
            "SENTINEL: %d (%s)", id, name.c_str());
    }

    // Serial
    std::string port_;
    int baud_;
    int fd_ = -1;
    std::string rx_buf_;

    // ROS2
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_str_;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr  pub_id_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SentinelClassifierNode>());
    rclcpp::shutdown();
    return 0;
}