# SENTINEL classifier — known limitations (firmware)

## ax_baseline: penyimpangan kausal dari referensi offline (`preprocess_v2.py`)

**Referensi offline** (`add_derived()` di `preprocess_v2.py`):
```python
base = df.groupby(key).ax.transform(lambda s: s.iloc[:5].mean())
```
Ini "menengok ke depan" — nilai baseline (rata-rata `ax` dari 5 baris pertama
tiap sesi) di-broadcast konstan ke SEMUA baris dalam sesi itu, termasuk baris
ke-1 sampai ke-4 sendiri. Ini sah untuk pemrosesan batch/offline karena
seluruh sesi sudah tercatat sebelum diproses.

**Firmware** (`sentinelPushFrame()` di `application/lib/sentinel_features.c`)
berjalan real-time/kausal — tidak bisa tahu rata-rata 5 sampel pertama
sebelum sampel ke-5 itu sendiri tiba. Pendekatan yang dipakai: rata-rata
BERJALAN dari sampel ke-1 s/d ke-5, dibekukan persis di rata-rata 5 sampel
mulai sampel ke-5 dan seterusnya (identik dengan referensi offline dari titik
itu).

**Dampak**: hanya 4 frame pertama tiap sesi (frame index 1-4, ~0.2 detik dari
sesi yang biasanya jauh lebih panjang) memakai baseline versi rata-rata
parsial, bukan rata-rata 5-sampel penuh. Window inferensi PERTAMA tiap sesi
(frame 0-19) memuat ke-4 frame ini, sehingga fitur turunan dari `ax`
(`a_body`, `slipL`, `slipR`) untuk window itu sedikit menyimpang dari yang
akan dihasilkan pipeline Python untuk data sesi yang sama.

**Kenapa tidak dikompensasi**: mengejar kecocokan persis di window pertama
akan butuh menunda keluaran (buffer 5 frame sebelum mulai menghitung fitur)
atau trik non-kausal lain yang membuat sistem tidak lagi real-time - bukan
trade-off yang sepadan untuk 1 window dari puluhan/ratusan yang dihasilkan
per sesi operasi. Dengan skema voting 5 keputusan (2.5 detik keputusan
penuh), window pertama ini cuma 1 dari 5 suara — dampaknya kecil dan
tertutup mayoritas voting berikutnya.

Sejak window kedua tiap sesi (frame 10-29 dan seterusnya), `ax_baseline`
sudah beku di nilai final (identik referensi offline) - tidak ada
penyimpangan lagi.
