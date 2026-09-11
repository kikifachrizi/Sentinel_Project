## TinyML Pipeline

> Dataset collection, preprocessing, and model training were carried out on a Raspberry Pi using Python. This repository contains the firmware — on-device inference and ROS2 integration. All figures below come from re-running the pipeline against the committed dataset.

---

### Overview

Surface classification runs **inside the MCU**, not on the Raspberry Pi. This is not an architectural preference — it follows from the kind of data the model needs.

The most discriminative features — PWM residual against the plant model, slip between encoder and IMU, current-to-PWM ratio — all originate from per-frame data inside the 20 Hz control loop. Streaming raw channels at 20 Hz to the Pi just to compute them there would add latency and a failure point with no benefit.

Random Forest was chosen because, once exported through `m2cgen`, the model becomes a **pure C function of nested if/else branches** — no runtime, no memory allocation, no external library. Its execution time is deterministic, which matters for a real-time system.

```
Dataset collection    →  Preprocessing     →  Training      →  Export
(firmware cmd 'd')       (preprocess_v2.py)   (scikit-learn)   (m2cgen)
                                                                  ↓
ROS2 topic            ←  CLASSIFY push    ←  Inference     ←  sentinel_model.c
/sentinel/class          (USART2)            (sentinelTask)     (STM32 flash)
```

---

### Dataset Collection

#### Setup

| ID | Class | Material | Characteristic |
|---|---|---|---|
| 0 | NORMAL | Clean ceramic tile | Baseline |
| 1 | TEXTURED | Taut fabric, 2.56 m | High rolling resistance |
| 2 | BANNER | Vinyl banner | Slippery surface |
| 3 | LOADED | Ceramic + 2 kg payload | Increased inertia |

The LOADED payload is two 1 kg PLA filament spools in their original packaging, cross-taped to the extrusion frame with the center of mass above the drive axle.

#### Protocol

A total of **120 runs**: 4 classes × 5 maneuver patterns × 6 repetitions × 80 frames (4 seconds at 20 Hz). Verified from the committed dataset: 9,600 samples, perfectly balanced at 2,400 per class.

Data is collected through the firmware command `d <pattern> <surface> <repetition>`. Each run produces 80 CSV rows buffered in RAM and written out after the run completes — not per frame, so UART traffic never disturbs loop timing.

#### Maneuver patterns

| Pattern | Structure | Purpose |
|---|---|---|
| 1 | forward 30 (2s) → stop (2s) | Low acceleration |
| 2 | forward 50 (2s) → reverse −50 (2s) | Nominal operating point |
| 3 | forward 80 (1.5s) → reverse −80 (1.5s) → stop (1s) | High acceleration |
| 4 | forward 50 (2s) → brake → hold (2s) | Deceleration |
| 5 | spin in place L=+40 R=−40 (4s) | Lateral slip |

**Why forward-reverse instead of a single direction:**

The original reason was practical — the available track was only 2.56 m, while a 5-second one-way run at 50 ticks/frame needs 3.3 m. Reversing direction solved the space constraint.

But the decision brought two benefits that were not anticipated:

**Feedforward has separate constants for forward and reverse.** The gap is substantial — the right motor's `u_db` differs by 46 counts between forward (146) and reverse (100). Without reverse data, the classifier would never see a regime the robot actually operates in.

**The forward→reverse transition produces the largest current spike.** When PWM reverses while the wheel still spins the old way, supply voltage and back-EMF add instead of opposing. The magnitude of that spike depends directly on how quickly the wheel can be decelerated, which is a function of traction.

#### Data validation

| Criterion | Threshold |
|---|---|
| Row count | exactly 80 |
| `t_ms` delta | consistent 50 ms |
| Sensor failures | `ina1_fail = ina2_fail = imu_fail = 0` |
| PWM saturation | < 10% of frames at 499 |
| Voltage drift per block | < 300 mV |

Each run also emits a `#config` line carrying the active gains and feedforward constants read from the live PID structs, so every file documents its own configuration. This catches runs contaminated by a runtime override or a mid-session board reset.

---

### Feature Engineering

#### The problem

The dataset spans five maneuver patterns with different target speeds (30 to 80 ticks/frame). Absolute PWM values range from roughly 60 to 360 across patterns — while the difference between surfaces at the same speed is only tens of counts.

Variance from the maneuver pattern is several times larger than variance from the surface. A model trained on absolute features learns to recognize the maneuver, not the surface.

The fix is a different representation: compute features that stay unchanged when the maneuver regime changes.

#### 84 features across three tiers

**Tier 1 — Invariant to maneuver regime**

| Feature | Formula |
|---|---|
| `residL`, `residR`, `resid_sum` | `(pwm − u_ff_pred) × sgn` |
| `kv_effL`, `kv_effR` | `(\|pwm\| − u_db) / \|vel\|` |
| `cur_per_pwmL/R` | `cur / \|pwm\|` |
| `cur_per_velL/R` | `cur / \|vel\|` |
| `corr_pvL`, `corr_pvR` | Pearson(pwm, vel) within window |

The residual uses the plant model calibrated on the NORMAL surface: `u_ff_pred = u_db + k_v × |target|`. Because the prediction already accounts for the target, the difference becomes invariant to target magnitude.

**Tier 2 — Cross-sensor physics**

| Feature | Formula |
|---|---|
| `slipL`, `slipR` | `(a_encoder − a_body) × sgn` |
| `a_body` | `−(ax − baseline) / 16384 × 9.81` |
| `gz_dps` | `gz / 131.0` |
| `ay` | raw |
| `track_err` | `\|velL − tgtL\| + \|velR − tgtR\|` |
| `cur_asym` | `curL − curR` |

Slip is the only feature that pits two independent sensors against each other. The encoder measures wheel rotation, the IMU measures body motion. On a grippy surface they agree; when traction is lost they diverge.

**Tier 3 — Regime context (deliberately not invariant)**

| Feature | Description |
|---|---|
| `tgt_abs` | Mean `\|target\|` within the window |
| `is_rev` | Fraction of frames with a negative target |

These two break the invariance principle on purpose. The robot always knows its own commanded velocity — the information is free at runtime and helps the model calibrate its expectations.

#### Aggregation

A 20-frame window (1 second) with a 10-frame stride (50% overlap), producing 840 windows from 120 runs.

```
16 channels × 5 statistics (mean, std, min, max, valid) = 80
+ corr_pvL, corr_pvR, tgt_abs, is_rev                   =  4
                                                       ─────
                                                         84
```

The `valid` statistic is the fraction of defined samples in the window, divided by the constant 20. Only six channels carry a meaningful validity mask — `kv_eff*` is undefined near zero velocity, `cur_per_*` is undefined at zero PWM. The remaining ten are always valid, which is why the trained forest never splits on their `valid` columns.

#### Session leakage: the voltage feature

Bus voltage (`bus_mV`) is recorded in the raw dataset but **deliberately never turned into a feature**.

Each surface block was collected in a separate session, and the battery drained monotonically. Voltage ended up correlating with the order of data collection rather than with the surface.

Measured impact — the same 84-feature set with bus voltage aggregates added back:

| Protocol | With `bus_mV` | Without (v2) | Difference |
|---|---|---|---|
| GroupKFold(5) | 92.0% | 67.5% | **+24.5 pts** |
| Leave-one-run-out | 91.7% | 67.4% | **+24.3 pts** |

In the contaminated model, five voltage-derived features out of 89 absorb **36.8% of total feature importance** and occupy the top four ranks:

```
bus_max              16.70%   ← rank #1 of 89
bus_rms               7.84%   ← #2
bus_mean              7.03%   ← #3
bus_min               3.97%   ← #4
--- first v2 feature ---
cur_per_pwmR_mean     2.52%   ← #5
```

On a real robot a full battery does not mean the floor is ceramic. The 24-point gap is the size of the false confidence that was avoided by removing these features.

---

### Model Selection & Validation

#### Validation split

Frames within a single run are correlated — the robot moves continuously and conditions do not change within 4 seconds. Windows overlapping by 50% make this worse.

Two protocols were compared (RF 50×10, window-level accuracy):

| Protocol | Accuracy |
|---|---|
| GroupKFold(5), group = `surface_pattern_run` | 67.6 ± 1.3% |
| Leave-one-run-out (group = `run_id`, 6 folds) | 67.9 ± 0.8% |
| Random KFold per window | 66.0% |

The two grouped protocols are statistically identical. More interesting is that **random splitting does not inflate accuracy** — it comes out 1.4 points *lower* than leave-one-run-out.

This is a direct consequence of removing the voltage features. With `bus_mV` present, every window in a run shares a near-constant voltage fingerprint, so a random split leaks heavily. Once that channel is gone, there is nothing left for a random split to exploit. The convergence of the two protocols is evidence that the v2 feature set is clean.

A separate protocol — **leave-one-pattern-out** — answers a different question: can the model recognize a surface during a maneuver it has never seen? Accuracy drops to 38.1%. That generalization does not hold, and it is reported separately rather than mixed into the table above.

#### Model comparison

Window-level accuracy under GroupKFold(5), averaged over 10 seeds:

| Model | Flash (`-Os`) | Window accuracy |
|---|---|---|
| RF 20×8 | 37 KB | 61.6 ± 1.4% |
| RF 50×8 | 93 KB | 65.0 ± 0.5% |
| **RF 50×10** | **142 KB** | **67.6 ± 1.3%** |
| RF 100×12 | 312 KB | 71.3 ± 0.8% |

RF 50×10 was selected. RF 100×12 is roughly 4 points more accurate, but at 312 KB it leaves too thin a flash margin and doubles inference time.

The accuracy gain from 20 to 50 trees is 3.4 points, and from 50 to 100 trees another 3.7 points — the usual diminishing return for ensemble size. No single feature dominates: the highest importance in the clean model is 2.52%.

#### Per-class accuracy

RF 50×10 under GroupKFold(5), overall 67.7%:

```
true\pred      NORMAL   LOADED   BANNER TEXTURED     acc
NORMAL            168        4       23       15    80.0%
LOADED             11      162       19       18    77.1%
BANNER             33        9      124       44    59.0%
TEXTURED           32       11       52      115    54.8%
```

NORMAL and LOADED are recognized reliably. TEXTURED and BANNER are not — and they are confused with **each other**, symmetrically: TEXTURED→BANNER 25%, BANNER→TEXTURED 21%.

This is physically coherent. Banner and fabric both alter grip without adding inertial load, while the 2 kg payload changes the plant dynamics outright. The feature set separates a change in load well; it separates two kinds of surface film poorly.

The same pattern holds under leave-one-run-out (BANNER 55.7%, TEXTURED 58.1%, cross-confusion 23%/22%), so it is a property of the classes rather than an artifact of the split.

#### Temporal voting

A single window decision is wrong roughly one time in three. The system therefore keeps the last N inference results and takes the majority.

Window = 1.0 s, hop = 0.5 s, so N decisions span `0.5 × (N−1) + 1.0` seconds:

| N | Span | GroupKFold(5) | Leave-one-run-out |
|---|---|---|---|
| 1 | 1.0 s | 67.7% | 67.4% |
| 3 | 2.0 s | 72.0% | 73.3% |
| **5** | **3.0 s** | **74.4%** | **79.4%** |
| 7 | 4.0 s | 79.2% | 82.5% |

Accuracy keeps rising through N=7 with no plateau. The firmware uses **N=5** — a deliberate trade-off: longer voting would improve accuracy further, but every additional decision adds 0.5 s of latency before a gain change can take effect.

Voting only helps when errors are independent across windows. Under leave-one-pattern-out, where errors are systematic per maneuver, voting barely moves the number (38.1% → 43.3%).

---

### Export to C — m2cgen

The trained scikit-learn model is converted to C with [`m2cgen`](https://github.com/BayesWitnesses/m2cgen), which emits the entire forest as a single self-contained function.

```python
import m2cgen as m2c
code = m2c.export_to_c(clf, function_name='sentinel_rf50x10')
open('sentinel_model.c', 'w').write(code)
```

#### What the generated code looks like

Each tree becomes nested `if`/`else` on feature thresholds, writing a class-probability vector into a local array. The forest averages all 50 vectors:

```c
void sentinel_rf50x10(double *input, double *output) {
    double var0[4]; double var1[4]; /* ... var99[4] */
    if (input[42] <= 0.317) {
        if (input[7] <= -12.4) {
            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        } else { /* ... */ }
    } else { /* ... */ }
    /* 50 trees → var50 .. var99 */
    add_vectors(var2, var99, 4, var1);
    mul_vector_number(var1, 0.02, 4, var0);   /* 0.02 = 1/50 */
    memcpy(output, var0, 4 * sizeof(double));
}
```

Only two helper functions are generated: `add_vectors()` and `mul_vector_number()`. The tree structure is verifiable from the emitted source — 50 output vectors (`var50` through `var99`), 49 `add_vectors` calls to combine them, and a final `mul_vector_number(..., 0.02, ...)` for the 1/50 average. Maximum indentation depth confirms depth 10; the file contains 3,968 split nodes across 16,085 lines.

#### Why this suits an MCU

| Property | Consequence |
|---|---|
| No dynamic allocation | No heap, no fragmentation |
| No external library | Nothing to link at runtime |
| Only comparisons and `memcpy` | Deterministic execution time |
| Constants live in `.rodata` | 21 KB of thresholds in flash, not RAM |

#### Compilation: `-Os` is mandatory

The generated file is compiled with **`-Os` as a per-file override** while the rest of the project stays at `-O0`. This is not a style preference:

| Optimization | `sentinel_model.o` size |
|---|---|
| `-O0` | ~610 KB — **does not fit** |
| `-Os` | 145,046 bytes (141.6 KB) |

Measured breakdown of the object file:

```
.text.sentinel_rf50x10    123,992 B
.rodata                    20,960 B
.text.add_vectors              46 B
.text.mul_vector_number        48 B
                          ─────────
                          145,046 B
```

In STM32CubeIDE this is set per-file (right-click `sentinel_model.c` → Properties → C/C++ Build → Optimization). The setting is stored in `.cproject`, so that file must be tracked in version control or the build silently overflows flash.

#### `double` vs `float`

`m2cgen` emits `double`. The Cortex-M33 FPU is single-precision only, so double-precision operations are software-emulated — normally a reason to convert.

It was left as `double`. A decision tree only performs comparisons, never arithmetic, so emulation cost is minimal. Measured inference time is 0.54 ms, well inside budget. Converting to `float` would also risk changing classification results where thresholds sit close together.

#### Golden test vectors

To confirm the C code produces identical output to the Python model, four test vectors were generated — one per class, choosing the most confident prediction in each — with expected output probabilities.

```c
#define GOLDEN_N_CASES 4
#define GOLDEN_N_FEATURES 84
static const double golden_input[][GOLDEN_N_FEATURES] = { /* ... */ };
static const double golden_expect[][4] = { /* ... */ };
```

Maximum absolute difference across all four cases was 1.4e-11, and `argmax` matched in every case. This file is a development-time reference — it is not compiled into the firmware.

---

## ROS2 Integration

ROS2 serves two purposes: driving the robot through `ros2_control`, and exposing the classifier output as a topic so surface state is observable from the ROS graph.

The firmware runs autonomously — classification and gain scheduling happen on the MCU whether or not ROS2 is running. ROS2 provides the teleop interface and the observability layer.

---

### Architecture

Two independent serial links carry different traffic:

| Link | Device | Direction | Purpose |
|---|---|---|---|
| USART1 | `/dev/ttySTM32` (CP2102) | bidirectional | `ros2_control` commands: `e`, `m`, `u` |
| USART2 | `/dev/ttyACM0` (ST-LINK VCP) | MCU → Pi only | `CLASSIFY` stream |

Keeping them separate means the classifier stream can never interfere with the control loop's request-response protocol.

```
                 ┌─────────────── Raspberry Pi ───────────────┐
                 │                                            │
STM32 USART1 ────┼──→ diffdrive_arduino ──→ diff_cont ──→ /odom
                 │         (ros2_control)                     │
                 │              ↑                             │
                 │         /cmd_vel ←── teleop_twist_keyboard  │
                 │                                            │
STM32 USART2 ────┼──→ sentinel_classifier_node ──→ /sentinel/class
                 │                                            │
                 └────────────────────────────────────────────┘
```

---

### Hardware Interface — `diffdrive_arduino`

The hardware interface uses [`joshnewans/diffdrive_arduino`](https://github.com/joshnewans/diffdrive_arduino) (humble branch), a `ros2_control` `SystemInterface` plugin that speaks a simple text protocol over serial.

#### Protocol

| Command | Sent | Expected reply |
|---|---|---|
| `e\r` | Read encoders | `<enc_left> <enc_right>\r\n` |
| `m <L> <R>\r` | Set wheel targets (ticks/frame) | any `\n`-terminated line |
| `u <Kp>:<Kd>:<Ki>:<Ko>\r` | Set PID gains | any `\n`-terminated line |

Note the argument order for `u` — the plugin sends **Kp:Kd:Ki:Ko**, not the more intuitive Kp:Ki:Kd:Ko. The firmware parser was corrected to match.

The plugin blocks on `ReadLine()` after every command, so the firmware must always reply with something newline-terminated. A silent firmware stalls the controller manager for the full `timeout_ms`.

#### Configuration

```xml
<ros2_control name="RealRobot" type="system">
  <hardware>
    <plugin>diffdrive_arduino/DiffDriveArduinoHardware</plugin>
    <param name="left_wheel_name">left_wheel_joint</param>
    <param name="right_wheel_name">right_wheel_joint</param>
    <param name="loop_rate">20</param>
    <param name="device">/dev/ttySTM32</param>
    <param name="baud_rate">115200</param>
    <param name="timeout_ms">1000</param>
    <param name="enc_counts_per_rev">595</param>
  </hardware>
  ...
</ros2_control>
```

`enc_counts_per_rev` is 595 — the measured value at the output shaft with x4 quadrature decoding, not the raw motor encoder specification.

PID gains are also passed from the xacro:

```xml
<param name="pid_p">70</param>
<param name="pid_d">110</param>
<param name="pid_i">0</param>
<param name="pid_o">50</param>
```

The plugin reads these and sends them to the MCU once on activation via `set_pid_values()`. The values match the firmware's compiled-in defaults and the `#config` line recorded in every dataset CSV, so activation restores the NORMAL baseline rather than overriding it with something unexpected.

Gain scheduling then takes over at runtime: `sentinelApplyGain()` modifies `Kp` and `Kd` in the live PID structs whenever the classified surface changes. Those runtime changes are not reflected back to ROS2 — the xacro values define the starting point, not the operating point.

> Note the argument order. The plugin's `set_pid_values(k_p, k_d, k_i, k_o)` serialises as `u Kp:Kd:Ki:Ko`, which is not the order the parameter names suggest. The firmware parser matches this order.

A second xacro exists in the workspace — `diffbot.ros2_control.xacro`, shipped with the upstream `diffdrive_arduino` package. It is **not used** by SENTINEL and carries different values (`loop_rate=30`, `baud_rate=57600`, `enc_counts_per_rev=3436`). The active file is `ros2_control.xacro`, included by `robot.urdf.xacro`.

---

### Classifier Node — `sentinel_classifier_node`

A small C++ node that reads the `CLASSIFY` stream from USART2 and republishes it as ROS2 topics.

#### Why a separate link

The plugin holds `/dev/ttySTM32` exclusively — no second process can read from it. Pushing `CLASSIFY` over the same link would also risk being consumed by the plugin's `ReadLine()` mid-transaction, silently corrupting an encoder reading.

Using USART2 sidesteps both problems. The node opens `/dev/ttyACM0` in non-blocking mode and polls every 10 ms.

#### Input format

```
CLASSIFY,3,LOADED,Kp=85,Kd=150
```

Pushed by the firmware after every inference (~every 0.5 s), regardless of whether the class changed. The `Kp` and `Kd` values are read from the live `leftPID` struct, not from the gain table — so the line reports what the control loop is actually using.

> Note: the `c` command on USART1 emits a different line that also begins with `CLASSIFY`, carrying voting state and DWT timing instead. The two formats share a prefix but serve different purposes.

#### Published topics

| Topic | Type | Content |
|---|---|---|
| `/sentinel/class` | `std_msgs/String` | Class name: `NORMAL`, `TEXTURED`, `BANNER`, `LOADED` |
| `/sentinel/class_id` | `std_msgs/Int32` | Class ID: 0–3 |

---

### Serial Port Setup

Both USB devices enumerate as CP2102-class adapters, so a fixed symlink avoids `/dev/ttyUSB*` ordering issues across reboots.

The rule matches the CP2102 by its serial number and creates the `/dev/ttySTM32` symlink referenced in the xacro:

```
SUBSYSTEM=="tty", ATTRS{idVendor}=="10c4", ATTRS{idProduct}=="ea60", \
  ATTRS{serial}=="0001", SYMLINK+="ttySTM32"
```

> This file is installed on the Raspberry Pi at `/etc/udev/rules.d/99-sentinel-usb.rules` but is not tracked in this repository. Without it, `/dev/ttySTM32` does not exist and bringup fails.

The ST-LINK VCP enumerates as `/dev/ttyACM0` and generally does not need a rule.

Both devices must be readable by the user running ROS2:

```bash
sudo usermod -aG dialout $USER
```

---

### Running

```bash
# Terminal 1 — robot bringup
ros2 launch sentinel_publisher launch_robot.launch.py

# Terminal 2 — classifier node (not included in any launch file)
ros2 run sentinel_publisher sentinel_classifier_node

# Terminal 3 — teleop
ros2 run teleop_twist_keyboard teleop_twist_keyboard

# Terminal 4 — watch the classification
ros2 topic echo /sentinel/class
```

The classifier node is registered as an executable in `CMakeLists.txt` but is deliberately not part of `launch_robot.launch.py`. It reads a separate device and serves observability only — keeping it out of the launch file means a missing VCP connection cannot block robot bringup.

Nothing may hold `/dev/ttySTM32` or `/dev/ttyACM0` before launch — a leftover `screen` session is the most common cause of a failed bringup.

```bash
sudo lsof /dev/ttySTM32    # check before launching
```

---

### Debugging Notes

#### `ReadByte() call has timed out`

The plugin logs this to `stderr`, so it appears in `launch.log` but not in the node logs. It means the firmware did not reply within `timeout_ms`, and the controller manager stalls for the full timeout — visible as `Overrun detected!` with a loop time matching `timeout_ms` almost exactly.

Two distinct causes were found during integration:

**Wrong reply format.** The plugin parses the `e` reply by splitting on a space and calling `atoi` on both halves. A reply of `OK 0\r\n` parses without error but yields garbage encoder values. The reply must be exactly two integers.

**Dropped bytes during I2C reads.** `pidTask` blocks the CPU for several milliseconds per frame reading INA219 and MPU6050 over polled I2C. At 115200 baud that window is long enough to swallow an entire command. The fix was moving UART RX to interrupt-driven with a software ring buffer, described in the firmware section.

#### Two processes on one port

`ros2_control` opens the serial port exclusively. Running `screen` on the same device concurrently does not fail loudly — bytes are split unpredictably between the two readers and both streams corrupt.

#### `XMLPARSER Error: realpath failed`

A harmless FastDDS warning about a missing optional profile file. It does not affect operation.

---

### Navigation Stack

> This section documents a configuration developed after the contest firmware was finalized, and is not part of the SENTINEL submission.

Navigation was set up on top of the same `ros2_control` stack, using an RPLIDAR A2M8 via `rplidar_ros`, `slam_toolbox` in online async mode for mapping, and Nav2 for autonomous navigation. Both SLAM and Nav2 run headless on the Pi over SSH, with RViz on a separate machine.

The LiDAR is **not used by SENTINEL** — classification and gain scheduling operate on encoder, current, and IMU data only.

Odometry quality directly determines map quality, so the encoder calibration described in the firmware section (595 ticks per revolution at the output shaft) matters as much for mapping as it does for velocity control.

---

## Results

### Runtime Performance

All figures below are measured on hardware via DWT cycle counters, or read from the linked ELF.

#### Inference timing

Two DWT timestamps bracket each stage inside `sentinelRunInference()`, accumulated separately as min/max/mean in microseconds:

| Stage | Time |
|---|---|
| `buildFeatureVector()` — 84 features | 2.50 ms |
| `sentinel_rf50x10()` — 50 trees | 0.54 ms |
| Sum | 3.04 ms |

Against a 500 ms budget (inference runs every 10 frames), total occupancy is **0.6%**.

These statistics accumulate from power-on and are never reset between sessions, so the reported mean is drawn from thousands of inferences rather than a handful. They are read with the `c` command:

```
CLASSIFY,voted=0,votes=0:0:0:0:0,inferCount=3089,
featUs_min=2482,featUs_max=2502,featUs_mean=2502,
modelUs_min=507,modelUs_max=600,modelUs_mean=537
```

#### Control loop timing

`pidTask` period is instrumented inline with DWT — deliberately not in a separate task, which would change the scheduling being measured. The measurement window opens on the rising edge of `moving` with a 3-iteration warmup.

| Metric | Value |
|---|---|
| Target period | 50 ms |
| Measured spread (max − min) | 31 µs peak-to-peak |

The firmware computes min, max, and mean only — no standard deviation. The 31 µs figure is the full peak-to-peak spread, not a ±tolerance.

Reported automatically when the movement window closes, triggered by the `g` or `h` command:

```
PID_PERIOD,n=5663,silent=1,min_ms=49.984,max_ms=50.015,mean_ms=49.999,
min_cyc=4998425,max_cyc=5001559,mean_cyc=4999999
```

Use `h` rather than `g` for measurement — `h` disables per-frame CSV streaming so UART traffic does not perturb the timing being measured.

#### Flash and RAM

Measured from the linked ELF:

```bash
$ arm-none-eabi-size Debug/sentinel_ws.elf
   text    data     bss     dec     hex
 248872    4008   37224  290104   46d38
```

| Component | Bytes | KB | % of 512 KB |
|---|---|---|---|
| RF 50×10 model (`-Os`) | 145,046 | 141.6 | 27.7% |
| Feature extraction | 8,421 | 8.2 | 1.6% |
| HAL, μT-Kernel, application | 99,413 | 97.1 | 19.0% |
| **Total flash** | **252,880** | **246.9** | **48.2%** |

RAM usage is 41,232 bytes of 272 KB (14.8%).

This is the one figure in this section that is fully reproducible from the repository — run `arm-none-eabi-size Debug/sentinel_ws.elf` to verify.

#### Sensor reliability

Each frame reads two INA219 devices and the MPU6050 over I2C, with one retry on failure. Failure counters increment only when both attempts fail, and only during a `d` data-collection run.

Across all 120 collection runs, every `DC_TIMING` line reported `ina1_fail=0, ina2_fail=0, imu_fail=0` — no frame where an I2C read failed twice consecutively.

---

### Classification Performance

Figures from cross-validation on the committed dataset (840 windows, 210 per class).

#### Overall

| Metric | Value |
|---|---|
| Window-level accuracy (RF 50×10) | 67.6 ± 1.3% |
| Voted accuracy (N=5, 3.0 s) | 74.4% |
| Chance level (4 balanced classes) | 25% |

#### Per class

```
true\pred      NORMAL   LOADED   BANNER TEXTURED     acc
NORMAL            168        4       23       15    80.0%
LOADED             11      162       19       18    77.1%
BANNER             33        9      124       44    59.0%
TEXTURED           32       11       52      115    54.8%
```

The system reliably identifies the two classes that matter most for control: NORMAL (the baseline) and LOADED (the one that requires different gains).

---

### Gain Scheduling Verification

#### Tuning results

Closed-loop step response on the LOADED surface, analysed with `gain_tune.py`:

| Gains | Rise time (90%) | Overshoot | Settling |
|---|---|---|---|
| Kp=70, Kd=110 (baseline) | 350 ms | +24.7% | 3300 ms |
| Kp=70, Kd=130 | 400 ms | +21.3% | 2500 ms |
| Kp=70, Kd=150 | 400 ms | +17.3% | 2200 ms |
| **Kp=85, Kd=150** | **350 ms** | **+18.7%** | **2200 ms** |

Kp=85, Kd=150 gives the best combination — rise time back to baseline while cutting overshoot by 6 points and settling time by a third.

> The baseline settling figure is reported as the last excursion outside the ±5% band before the response stabilises. A single isolated blip at t=6.45 s sits 0.17 above the threshold; the script's raw output extends settling to 6500 ms on that account.

Equivalent experiments on TEXTURED and BANNER showed no improvement over the NORMAL baseline, so both use the NORMAL gains.

| Class | Kp | Kd |
|---|---|---|
| NORMAL | 70 | 110 |
| TEXTURED | 70 | 110 |
| BANNER | 70 | 110 |
| LOADED | **85** | **150** |

`Ki` and `Ko` are not scheduled — they remain 0 and 50 for every class. In practice this makes gain scheduling binary: NORMAL-equivalent versus LOADED.

#### Proving the gains actually change

The `CLASSIFY` line on USART2 reports `Kp` and `Kd` read from the live `leftPID` struct, so a changing value is evidence the control loop is using the new gains — not merely that the classifier reported a new class.

Stronger evidence comes from reading the gains back through a **different task on a different UART**. The `p` (PING) command is served by `comTask` on USART1 and dumps the full PID state:

```
p                              → left: 70 0 110 50 157 178 142 190
                                 right: 70 0 110 50 146 155 100 201

[move robot onto the loaded surface, wait for the class to settle]

                               → CLASSIFY,3,LOADED,Kp=85,Kd=150   (USART2)

p                              → left: 85 0 150 50 157 178 142 190
                                 right: 85 0 150 50 146 155 100 201
```

The second `p` confirms the change through a path entirely independent of the task that made it, and also confirms that `Ki`, `Ko`, and the feedforward constants were left untouched.

Observed transition in the live log, showing hysteresis in action:

```
SENTINEL: 2 (BANNER,Kp=70,Kd=110)
SENTINEL: 3 (LOADED,Kp=70,Kd=110)    ← class changed, hysteresis counting
SENTINEL: 3 (LOADED,Kp=70,Kd=110)
SENTINEL: 3 (LOADED,Kp=85,Kd=150)    ← 5 consecutive → gains applied
```

---

### Known Limitations

**TEXTURED and BANNER are hard to separate.** Both are thin sheets over ceramic that alter grip without changing inertia. They are confused with each other symmetrically — 25% and 21% — and this holds across validation protocols, so it is a property of the class definitions rather than the split.

**Generalization to unseen maneuvers does not hold.** Under leave-one-pattern-out validation, accuracy drops to 38.1%. The classifier works within the maneuver space it was trained on. Extending coverage would require collecting additional motion patterns.

**Voting latency is a design trade-off.** Accuracy continues to improve through N=7 (79.2%) with no plateau, but each additional decision adds 0.5 s before a gain change can take effect. N=5 was chosen to keep response time reasonable.

**Debris sensitivity.** Loose hardware on the floor raises current draw and body rotation more than any of the trained surface differences. Under those conditions the classifier reports BANNER — a reasonable nearest match, but the system assumes a clear floor.

**Gain scheduling is effectively binary.** Three of four classes share the NORMAL gains, so in practice the system switches between two gain sets rather than four.

**`huart2` has two writers.** Both `sentinelTask` (CLASSIFY push) and `comTask` (via `vcpMonitor()`) transmit on USART2 without arbitration. A `HAL_BUSY` collision can drop a log line. The control path on USART1 is unaffected.