#ifndef SENTINEL_MODEL_H
#define SENTINEL_MODEL_H

/* DIKONFIRMASI (feature_names.txt sekarang ada di workspace, 84 baris):
 * spec awal minta 83, tapi model sebenarnya butuh 84 (index 0..83) - 16
 * kanal x 5 statistik (mean/std/min/max/valid) + 4 fitur ekstra
 * (corr_pvL, corr_pvR, tgt_abs, is_rev) = 84. Sebelumnya ini cuma diduga
 * dari grep index tertinggi di sentinel_model.c ("input[83]") - sekarang
 * dikonfirmasi langsung cocok dengan feature_names.txt baris 1-84. */
#define SENTINEL_N_FEATURES 84
#define SENTINEL_N_CLASSES  4

void sentinel_rf50x10(double *input, double *output);

#endif
