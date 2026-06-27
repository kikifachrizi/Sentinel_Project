# Resume Penggunaan AI — Sentinel Project

| No | Tool AI | Tanggal | Tujuan Penggunaan | Contoh Prompt | Output yang Dipakai | Cara Verifikasi |
|----|---------|---------|-------------------|---------------|---------------------|-----------------|
| 1 | Claude Code | 2026-05-24 | Inisialisasi workspace ROS2 & struktur folder proyek | "Buat workspace ROS2 dengan struktur package untuk robot differential drive" | Struktur folder workspace dengan `src/`, `build/`, `install/`, `log/` | `ls` melihat direktori terstruktur, `colcon build` sukses |
| 2 | Claude Code | 2026-05-24 | Setup package `diffdrive_arduino` untuk hardware driver robot | "Buat package ROS2 untuk differential drive robot dengan komunikasi serial ke Arduino" | Package `diffdrive_arduino` dengan ROS2 controller, hardware interface, komunikasi serial | `colcon build` sukses, node `diffdrive_arduino` muncul di `ros2 node list` |
| 3 | Claude Code | 2026-05-24 | Setup Gazebo simulation & launch file | "Buat konfigurasi Gazebo simulation untuk robot dengan world dan launch file" | Launch file `launch_sim.launch.py`, world files (SDF), konfigurasi bridge Gazebo-ROS | `ros2 launch sentinel_publisher launch_sim.launch.py` berjalan tanpa error |
| 4 | Claude Code | 2026-05-25 | Update kode robot & integrasi komponen | "Update kode robot dengan konfigurasi baru" | Perbaikan pada file konfigurasi dan deskripsi robot | `colcon build` sukses |
| 5 | Claude Code | 2026-05-28 | Setup dokumentasi proyek dengan docs directory | "Buat dokumentasi proyek di folder docs" | Folder `docs/`, file markdown dokumentasi | File terbaca di GitHub |
| 6 | Claude Code | 2026-05-28 | Setup Pull Request & branch management | "Buat PR untuk merge branch docs ke main" | PR #1 dan #2, merge docs ke main, revert jika perlu | PR muncul di GitHub, merge sukses |
| 7 | Claude Code | 2026-05-28 | Update README.md | "Update README dengan deskripsi proyek yang lebih baik" | README.md diperbarui | File terbaca di GitHub |
| 8 | Claude Code | 2026-05-28 | Revert & cleanup docs branch | "Revert merge docs dan cleanup folder docs dari build artifacts" | Folder docs dihapus, build artifacts dibersihkan | `git log` menunjukkan revert sukses, `colcon build` bersih |
| 9 | Claude Code | 2026-05-28 | Repair Gazebo plugin & setup teleop ROS2 | "Perbaiki plugin Gazebo yang error dan setup teleop untuk kontrol robot" | Plugin Gazebo diperbaiki, teleop ROS2 control (keyboard) berfungsi | Robot bisa dikendalikan via keyboard di Gazebo |
| 10 | Claude Code | 2026-06-04 | Update file markdown dokumentasi | "Update dokumentasi dengan info terbaru" | File markdown diperbarui | File terbaca |
| 11 | Claude Code | 2026-06-05 | Update dokumentasi lanjutan | "Update dokumentasi dengan info tambahan" | File markdown diperbarui lagi | File terbaca |
| 12 | Claude Code | 2026-06-05 | Integrasi LiDAR Dreame LDS | "Buat package ROS2 untuk driver LiDAR Dreame LDS" | Package `dreame_lds_ros2` dengan node driver LiDAR, launch file, config, params | `colcon build` sukses, data LiDAR keluar di `/scan` topic |
| 13 | Claude Code | 2026-06-19 | Analisis error Gazebo Fuel model & troubleshooting simulasi | "Analisis error Gazebo: Fuel model 404 saat load world" | Identifikasi model Fuel yang error (`simple_baylands`, `bumblebeeAS/Singapore River`), solusi comment/hapus include model | Simulasi berjalan setelah error diidentifikasi |
| 14 | Claude Code | 2026-06-19 | Edukasi GitHub: Fork, PR, Issue, Actions, Release | "Jelaskan fitur GitHub Level 2 dan 3 untuk kolaborasi tim" | Pemetaan fitur GitHub (Fork, PR, Issue, Actions, Projects, Release) dan 3 opsi merge | Dipahami dan siap dipraktekkan |
| 15 | Claude Code | 2026-06-19 | Setup autentikasi GitHub & analisis konfigurasi | "Cek setup autentikasi GitHub yang digunakan di workspace ini" | Identifikasi auth via `gh` CLI + HTTPS, token scopes, rekomendasi SSH/GPG | `gh auth status` menunjukkan logged in |
| 16 | Claude Code | 2026-06-19 | Dokumentasi session ke file session.md | "Buat session.md merangkum pembicaraan session ini" | File `session.md` dengan ringkasan lengkap | File terbaca, isi sesuai diskusi |
| 17 | Claude Code | 2026-06-19 | Dokumentasi resume proyek ke file resume.md | "Buat resume tabel semua pekerjaan dari awal hingga sekarang" | File `resume.md` ini dengan format tabel lengkap | File terbaca, data sesuai git history |

> **Catatan:** Proyek ini adalah **Sentinel Project** — robot differential drive dengan ROS2, Gazebo simulation, kontrol Arduino via serial, dan LiDAR Dreame LDS. Total 86 file, 10.459 baris kode, 21 commits, 6 package ROS2.
