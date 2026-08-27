# SENTINEL — Project Context Brief
*Untuk konteks LLM — status per 26 Agustus 2026*

---

## 1. Gambaran Proyek

**SENTINEL** adalah sistem TinyML adaptive traction control untuk robot AMR diferensial **TRON** yang diikutsertakan dalam **TRON Programming Contest 2026**. Model Random Forest berjalan di STM32H533RE (μT-Kernel 3.0), mengklasifikasikan permukaan lantai secara online dan mem-schedule parameter feedforward sesuai kelas.

**Deadline**: Hardware harus **TIBA** di Tokyo paling lambat **30 September 2026 pukul 18:00 JST**.

---

## 2. Hardware & Konfigurasi Sistem

| Parameter | Nilai |
|---|---|
| MCU | STM32H533RE (Cortex-M33, 512 KB flash, 272 KB RAM) |
| RTOS | μT-Kernel 3.0 |
| Chassis | Robot diferensial, 40×40 cm |
| Encoder | 595 ticks/rev (output shaft, x4 quadrature) |
| Roda | r = 0.0635 m |
| IMU | MPU6050 ch0 @0x68, ±2g, ±250 dps, DLPF_CFG=3 |
| INA219 | ch1/ch2, shunt 0.1 Ω, CAL=0x1000 |
| Loop rate | 20 Hz (50 ms/frame, jitter ±31 µs) |

**Struktur tugas μT-Kernel (prioritas, lebih kecil = lebih tinggi):**
- `logTest` : 5
- `pidTask` : 10
- `comTask` : 12 ← dinaikkan dari 11 untuk memberi giliran sentinelTask
- `sentinelTask` : 11 ← diturunkan dari 12

**Catatan starvation**: `comTask` busy-wait di `HAL_UART_Receive` polling (tidak pernah masuk WAIT state). Solusinya: tukar prioritas `sentinelTask` (11) dan `comTask` (12). Konsekuensi: byte UART bisa hilang saat inferensi berjalan (~0.54 ms sekali tiap 0.5 detik — risiko kecil, terdokumentasi).

---

## 3. Konfigurasi PID & Feedforward (terkunci, hardcoded)

Model PID yang digunakan adalah **velocity-form / PII²** (bukan PID standar) — ini temuan penting: `Kd` di ros_arduino_bridge bertindak sebagai gain proporsional nyata, `Kp` sebagai gain integral.

```
Kp=70, Ki=0, Kd=110, Ko=50
Loop rate: 20 Hz, MAX_PWM=499
```

**Feedforward per motor (KV_DEN=100):**

| | u_db_fwd | kv_fwd | u_db_rev | kv_rev |
|---|---|---|---|---|
| Left | 157 | 178 | 142 | 190 |
| Right | 146 | 155 | 100 | 201 |

`ffScalePct=100` (aktif). Rise time setelah FF: 550ms → 350ms (−36%).

---

## 4. Command Firmware

| Cmd | Fungsi |
|---|---|
| `d <pola> <surf> <rep>` | Data collect, 80 frame/4s, buffer RAM |
| `s <m> <arah> <start> <step> <end> <hold>` | Static sweep open-loop |
| `g`/`h` | Log test 10s / silent |
| `u <Kp:Ki:Kd:Ko>` | Update gain runtime (hilang saat reset) |
| `f <pct>` | Feedforward scale |
| `j`/`k` | INA219 diag / IMU diag |
| `c` | CLASSIFY_STATUS |
| `e`/`r` | Baca/reset encoder |
| `m <tgtL> <tgtR>` | Set target closed-loop |
| `o <pwmL> <pwmR>` | PWM raw open-loop |

---

## 5. Dataset Training

**120 run total**: 4 kelas × 30 run × 5 pola × 6 repetisi × 80 frame

| ID | Kelas | Material | Keterangan |
|---|---|---|---|
| 0 | NORMAL | Keramik bersih | Baseline |
| 1 | TEXTURED | Kain tegang | Rolling resistance tinggi |
| 2 | LOW_TRACTION | Banner vinyl | Licin |
| 3 | LOADED | Keramik + 2 roll filament PLA 1kg | Beban di atas poros roda |

**Pola manuver (4 detik = 80 frame @ 20 Hz):**
- Pola 1: maju 30 (2s) → berhenti (2s)
- Pola 2: maju 50 (2s) → mundur −50 (2s)
- Pola 3: maju 80 (1.5s) → mundur −80 (1.5s) → berhenti (1s)
- Pola 4: maju 50 (2s) → rem ke 0 → tahan (2s)
- Pola 5: putar di tempat L=+40 R=−40 (4s)

**File**: `sentinel_s0_normal.csv`, `sentinel_s1_banner.csv` (surface=2!), `sentinel_s2_textured.csv` (surface=1!), `sentinel_s3_loaded.csv`

---

## 6. Preprocessing & Fitur

**File**: `preprocess_v2.py` → `windows_v2.csv`

**84 fitur invarian** (residual terhadap model plant NORMAL, k_v efektif, rasio arus, korelasi PWM-vel, slip encoder vs IMU).

**Fitur tegangan (`bus_mV`) DIBUANG** karena kebocoran sesi: setiap blok permukaan dikumpulkan di sesi baterai berbeda, sehingga tegangan berkorelasi dengan urutan pengambilan, bukan permukaan. Model yang menyertakan `bus_mV` mendapat akurasi palsu 83% (sebenarnya 41%).

**Window**: 20 frame (1 detik), stride 10 frame (0.5 detik).

**Split validasi**: GroupKFold per `run_id` — WAJIB, bukan per frame. Frame dalam satu run berkorelasi kuat; split per frame memberi akurasi palsu.

---

## 7. Model & Akurasi

| Model | Ukuran (.text ARM) | Akurasi per window | Akurasi voting 4W (2.5s) |
|---|---|---|---|
| RF 20×8 | 37 KB | 46% | 75% |
| RF 50×8 | 93 KB | 65% | 79% |
| **RF 50×10** | **132 KB** | **70%** | **81%** |
| RF 100×12 | 312 KB | 72% | 86% |

**Model dipilih**: RF 50×10 (132 KB, `sentinel_model.c`).

**Catatan penting**: Akurasi per window 70% naik ke 81% dengan voting 4 window (2.5 detik). Ini bukan trik — classifier memerlukan waktu observasi untuk memutuskan. Pasangan paling sulit: KAIN vs BANNER (d'=3.45).

**Golden test vectors**: `golden_vectors.h` — 4 kasus, maxDiff=1.4e-11 (lolos).

---

## 8. Integrasi Firmware

**File model**:
- `application/lib/sentinel_model.c` (RF50×10, dikompilasi **-Os** → 132 KB)
- `application/lib/sentinel_features.c` (ring buffer 20 frame + 84 fitur)
- `application/lib/sentinel_model.h` (`SENTINEL_N_FEATURES=84, SENTINEL_N_CLASSES=4`)

**Flash usage**: 90 KB firmware + 8 KB features + 132 KB model = **~230 KB dari 512 KB**

**Timing terukur di hardware (DWT)**:
- Perhitungan 84 fitur: **2.5 ms**
- Inferensi RF 50×10: **0.54 ms**
- Total per siklus: **3.04 ms** (dari 500 ms budget inferensi tiap 10 frame)
- `pidTask` tetap 50 ms, jitter **31 µs** — TIDAK terganggu

**`double` vs `float`**: Model menggunakan `double` (m2cgen default). Cortex-M33 memiliki FPU single-precision saja, tapi emulasi `double` ternyata murah — inferensi hanya 0.54 ms. Konversi ke `float` tidak diperlukan.

**Arsitektur inferensi**:
- Ring buffer 20 frame terakhir dari `pidTask`
- `sentinelTask` berjalan tiap 10 frame (0.5 detik): hitung 84 fitur → inferensi → simpan hasil
- Voting 5 keputusan terakhir → kelas final (mayoritas; seri = pertahankan kelas sebelumnya)
- Latensi keputusan penuh: ~2.5 detik

---

## 9. Hasil Verifikasi di Hardware

```
CLASSIFY,voted=0,votes=0:0:0:0:0,inferCount=3089   → NORMAL (keramik bersih) ✓
CLASSIFY,voted=2,votes=2:2:2:2:2,inferCount=24     → BANNER (lantai kotor/debris)
```

Lantai kotor (debris mur/ring tercecer) terklasifikasi sebagai BANNER karena rolling resistance serupa — perilaku yang sah dan terdokumentasi. Classifier benar melaporkan "bukan NORMAL".

---

## 10. Known Issues / Limitations

1. **ax_baseline kausal**: Firmware menggunakan rata-rata parsial frame 1–4 (rata-rata berjalan), sedangkan offline Python menggunakan `.iloc[:5].mean()` yang "menengok ke depan". Menyimpang hanya di window inferensi pertama per sesi (1 dari 5 suara voting) — diabaikan.

2. **Encoder tidak nol di t=0**: `encL`/`encR` absolut di baris pertama run `d` membawa sisa dari run sebelumnya. Tidak berdampak ke PID (kolom `vel` dihitung dari `PrevEnc` yang direset).

3. **Byte UART hilang saat inferensi**: Setelah swap prioritas, `sentinelTask` dapat mem-preempt `comTask` selama ~0.54 ms. Dampak kecil, terdokumentasi.

4. **Debris/lantai kotor**: Robot sangat sensitif terhadap debris — arus dan rotasi melonjak jauh melebihi perbedaan antar kelas permukaan.

---

## 11. Tabel Gain per Kelas (STATUS: PENDING)

Sweep statis (`s`) dilakukan untuk TEXTURED (kain) dan LOW_TRACTION (banner), tapi hasilnya **tidak konsisten** — `u_db` dan `k_v` naik-turun tanpa pola fisik yang jelas karena selisih antar permukaan lebih kecil dari ketidakpastian pengukuran sweep statis satu kali.

Tiga opsi yang belum diputuskan:
- **A** (Direkomendasikan): Schedule gain PID per kelas via `pid_metrics.py` + command `u`
- **B**: Sweep statis 3× per permukaan lalu rata-rata
- **C**: Classifier sebagai output/reporting saja, gain tetap

---

## 12. Sisa Pekerjaan

| # | Item | Status |
|---|------|--------|
| 4 | Tabel gain per kelas | ⬜ Opsi A/B/C belum dipilih |
| 5 | Gain scheduling + hysteresis + bumpless transfer | ⬜ |
| 6 | Uji end-to-end 4 permukaan | ⬜ |
| — | README + dokumentasi | ⬜ |
| — | Bedah pelan-pelan (pemahaman ML pipeline) | ⬜ Setelah poin 6 |

---

## 13. File Penting

| File | Lokasi |
|---|---|
| Preprocessing | `preprocess_v2.py` |
| Dataset windows | `windows_v2.csv` |
| Model Python | `gen/rf50x10.pkl` |
| Feature names | `feature_names.txt` (84 fitur, urutan KRITIS) |
| Golden vectors | `golden_vectors.h` |
| Protokol data | `SENTINEL_data_collection_protocol.md` |

