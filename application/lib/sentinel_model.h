#ifndef SENTINEL_MODEL_H
#define SENTINEL_MODEL_H

/* 16 channels x 5 stats (mean/std/min/max/valid) + 4 extra features
 * (corr_pvL, corr_pvR, tgt_abs, is_rev) = 84. Matches feature_names.txt. */
#define SENTINEL_N_FEATURES 84
#define SENTINEL_N_CLASSES  4

void sentinel_rf50x10(double *input, double *output);

#endif
