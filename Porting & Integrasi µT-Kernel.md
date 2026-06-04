# SOP: Porting & Integrasi µT-Kernel 3.0 BSP2 pada NUCLEO-H533RE

*   **Target Perangkat:** NUCLEO-H533RE (ARMv8-M / Cortex-M33)
*   **Lingkungan:** STM32CubeIDE v2.1.1
*   **Sistem Operasi:** µT-Kernel 3.0 (RTOS)

## 🔄 Alur Integrasi Total

[ 1. Device Config ] --> [ 2. C/C++ Build Settings ] --> [ 3. Source Management ] --> [ 4. Filter & Patch ]
      ( .ioc )                  ( Properties )               ( App Folder )               ( Exclude )
         |                           |                             |                            |
   Pilih Toolchain         Set Macro & Include Paths      Buat app_main.c &        Exclude arsitektur salah
   STM32CubeIDE            untuk Compiler & Assembler     Daftarkan Source Loc     & Samakan sN_INTVEC

---

## 📊 Langkah Eksekusi (Step-by-Step)

### Fase 1: Persiapan Lingkungan Dasar (Device Configuration)
| Langkah | Lokasi / Aksi | Keterangan |
| :--- | :--- | :--- |
| **1. Set Toolchain** | Buka `sntnl_H533RE.ioc` -> Tab **Project Manager** -> Project. | Memastikan IDE mengenali struktur proyek. |
| **2. Ubah Target** | Ubah *Toolchain / IDE* menjadi **STM32CubeIDE**. | Jangan gunakan `EWARM`. |
| **3. Generate Code** | Simpan (`Ctrl+S`) -> Pilih "Yes" saat pop-up muncul. | Membuat *Makefile* otomatis. |

### Fase 2: Konfigurasi Parameter Build (C/C++ Build)
| Langkah | Lokasi / Aksi | Keterangan |
| :--- | :--- | :--- |
| **1. Buka Settings** | Klik kanan proyek -> **Properties** -> **C/C++ Build** -> **Settings**. | Area parameter kompilasi. |
| **2. Preprocessor** | Di **MCU GCC Compiler** -> **Preprocessor** -> Tambah `_STM32CUBE_NUCLEO_H533_`. | Lakukan juga untuk **MCU GCC Assembler**. |
| **3. Include Paths** | Di **MCU GCC Compiler** -> **Include paths** -> Tambah 4 path mtk3_bsp2 (gunakan *Workspace...*). | Lakukan juga untuk **MCU GCC Assembler**. |

### Fase 3: Manajemen Source Code (Aplikasi & Kernel)
| Langkah | Lokasi / Aksi | Keterangan |
| :--- | :--- | :--- |
| **1. Buat Direktori** | Klik kanan proyek -> New Folder -> **`application`**. | Pemisah kode logika & hardware. |
| **2. Buat File Utama** | Di folder `application`, buat file **`app_main.c`**. | Berisi `INT usermain(void)`. |
| **3. Daftarkan Folder**| Properties -> **C/C++ General** -> **Paths and Symbols** -> **Source Location** -> Add Folder -> Centang **`mtk3_bsp2`** & **`application`**. | Memaksa Linker kompilasi OS. |

### Fase 4: Pembersihan Arsitektur & Perbaikan Bug (Filter & Patch)
| Langkah | Lokasi / Aksi | Keterangan |
| :--- | :--- | :--- |
| **1. Blokir Merek Lain** | Buka `mtk3_bsp2/sysdepend`. Exclude folder **`nxp_mcux`** & **`ra_fsp`**. (Klik kanan -> Resource Configurations -> Exclude from Build). | Mencegah konflik driver NXP/Renesas. |
| **2. Blokir ARMv7-M** | Buka `mtk3_bsp2/sysdepend/stm32_cube/cpu/core`. Exclude folder **`armv7m`**. | H533RE menggunakan ARMv8-M. |
| **3. Blokir HAL Salah** | Buka `mtk3_bsp2/sysdepend/stm32_cube/device/hal_adc/sysdepend`. Exclude file **h7, l4, n6**. | Sisakan `hal_adc_stm32h5.c`. |
| **4. Patch TrustZone** | Properties -> C/C++ Build -> Settings -> MCU GCC Compiler -> Preprocessor. Tambahkan makro: **`sN_INTVEC=N_INTVEC`**. | Perbaikan bug nama vektor interupsi. |

---

## 🏁 Validasi Akhir
Tekan **Build**. Jika *Console* menampilkan "Build Finished. 0 errors", proses porting 100% sukses. Gunakan tombol hijau **Run** untuk memulai proses *flashing*.