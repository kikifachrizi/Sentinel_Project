#!/usr/bin/env python3
"""
SENTINEL preprocessing v2 - fitur invarian terhadap rezim manuver.

Perubahan dari v1:
  - Fitur RESIDUAL: pwm_aktual - u_ff_prediksi (model plant NORMAL)
  - Fitur PARAMETER: k_v efektif diestimasi per window
  - Fitur RASIO: arus per PWM, arus per kecepatan
  - Fitur KORELASI: keeratan pwm-vel dalam window
  - Fitur absolut yang digantikan DIBUANG (bukan ditumpuk)
  - Fitur turunan tegangan DIBUANG (kebocoran sesi)
"""
import sys, glob
import numpy as np
import pandas as pd

COLS = ['run_id','surface','pattern','t_ms','tgtL','tgtR','pwmL','pwmR',
        'encL','encR','velL','velR','curL','curR','curRawL','curRawR',
        'bus_mV','ax','ay','az','gx','gy','gz']

# Konstanta feedforward hasil kalibrasi di permukaan NORMAL (dari #config)
FF = {'L': {'db_f':157,'kv_f':178,'db_r':142,'kv_r':190},
      'R': {'db_f':146,'kv_f':155,'db_r':100,'kv_r':201}}
KV_DEN = 100.0

TICK_TO_MS, TICK_TO_MS2 = 0.01341, 0.268
G_LSB, GYRO_LSB = 16384.0, 131.0
WINDOW, STRIDE = 20, 10


def load_raw(path):
    rows = []
    for ln in open(path, errors='ignore'):
        ln = ln.strip().replace('\r','')
        if not ln or ln[0]=='#' or ln.startswith('DC_TIMING'):
            continue
        p = ln.split(',')
        if len(p) < len(COLS): continue
        try: rows.append([int(x) for x in p[:len(COLS)]])
        except ValueError: continue
    df = pd.DataFrame(rows, columns=COLS)
    return df[df.groupby(['surface','pattern','run_id']).t_ms.transform('size')==80].copy()


def u_ff_pred(target, side):
    """Prediksi PWM oleh model plant NORMAL. Bertanda mengikuti target."""
    c = FF[side]
    mag = np.abs(target)
    db  = np.where(target > 0, c['db_f'], c['db_r'])
    kv  = np.where(target > 0, c['kv_f'], c['kv_r'])
    u   = (db*KV_DEN + kv*mag) / KV_DEN
    return np.where(target == 0, 0.0, np.sign(target)*u)


def add_derived(df):
    df = df.sort_values(['surface','pattern','run_id','t_ms']).copy()
    key = ['surface','pattern','run_id']
    sgn = np.sign(df.tgtL).replace(0, 1)

    for s, tgt, pwm, vel, cur in [('L','tgtL','pwmL','velL','curL'),
                                  ('R','tgtR','pwmR','velR','curR')]:
        # --- METODE 1: residual terhadap model plant NORMAL ---
        # Nol = berperilaku seperti NORMAL. Positif = butuh usaha lebih.
        # Invarian terhadap besar target: variansi rezim hilang analitik.
        pred = u_ff_pred(df[tgt].values, s)
        df[f'resid{s}'] = (df[pwm] - pred) * sgn

        # --- METODE 2: k_v efektif (parameter plant, bukan gejala) ---
        # Dari u = u_db + k_v*vel  ->  k_v = (|u| - u_db)/|vel|
        db = np.where(df[tgt] > 0, FF[s]['db_f'], FF[s]['db_r'])
        v_abs = df[vel].abs()
        kv_eff = (df[pwm].abs() - db) / v_abs.replace(0, np.nan)
        # window dengan kecepatan ~0 tidak punya k_v yang terdefinisi
        df[f'kv_eff{s}'] = kv_eff.where(v_abs >= 5)

        # --- METODE 3: rasio arus ---
        df[f'cur_per_pwm{s}'] = df[cur] / df[pwm].abs().replace(0, np.nan)
        df[f'cur_per_vel{s}']  = df[cur] / v_abs.replace(0, np.nan)

        # kanal fisik yang tetap dipakai
        df[f'a{s}_ms2'] = df.groupby(key)[vel].diff().fillna(0) * TICK_TO_MS2

    # akselerasi bodi + slip (baseline per run dari 5 frame pertama)
    base = df.groupby(key).ax.transform(lambda s: s.iloc[:5].mean())
    df['a_body'] = -(df.ax - base) / G_LSB * 9.81
    df['slipL'] = (df.aL_ms2 - df.a_body) * sgn
    df['slipR'] = (df.aR_ms2 - df.a_body) * sgn

    df['gz_dps']    = df.gz / GYRO_LSB
    df['cur_asym']  = df.curL - df.curR
    df['resid_sum'] = df.residL + df.residR
    df['track_err'] = ((df.velL - df.tgtL).abs() + (df.velR - df.tgtR).abs())
    return df


# Kanal yang diagregasi. Absolut (pwm, vel mentah) SUDAH DIBUANG,
# diganti residual/parameter/rasio yang invarian terhadap rezim.
AGG = ['residL','residR','resid_sum','track_err',
       'kv_effL','kv_effR','cur_per_pwmL','cur_per_pwmR',
       'cur_per_velL','cur_per_velR','cur_asym',
       'slipL','slipR','a_body','gz_dps','ay']


def windowize(df):
    out = []
    for (surf,pat,run), g in df.groupby(['surface','pattern','run_id']):
        g = g.reset_index(drop=True)
        for st in range(0, len(g)-WINDOW+1, STRIDE):
            w = g.iloc[st:st+WINDOW]
            rec = {'surface':surf,'pattern':pat,'run_id':run,
                   'group':f'{surf}_{pat}_{run}'}
            for c in AGG:
                v = w[c].values.astype(float)
                v = v[~np.isnan(v)]
                if len(v) == 0:
                    rec[f'{c}_mean']=rec[f'{c}_std']=rec[f'{c}_min']=rec[f'{c}_max']=0.0
                    rec[f'{c}_valid']=0.0
                else:
                    rec[f'{c}_mean'],rec[f'{c}_std']=v.mean(),v.std()
                    rec[f'{c}_min'],rec[f'{c}_max']=v.min(),v.max()
                    rec[f'{c}_valid']=len(v)/WINDOW

            # --- METODE 4: korelasi pwm-vel dalam window ---
            # Cengkeraman baik -> pwm & vel bergerak rapat.
            # Slip -> pwm naik, vel tidak ikut -> korelasi turun.
            for s in ['L','R']:
                p, v = w[f'pwm{s}'].values.astype(float), w[f'vel{s}'].values.astype(float)
                rec[f'corr_pv{s}'] = (np.corrcoef(p,v)[0,1]
                                      if p.std()>1e-9 and v.std()>1e-9 else 0.0)
            # konteks rezim: model boleh tahu seberapa cepat yang diminta
            rec['tgt_abs'] = w.tgtL.abs().mean()
            rec['is_rev']  = float((w.tgtL < 0).mean())
            out.append(rec)
    return pd.DataFrame(out).fillna(0)


def main():
    files = sys.argv[1:] or sorted(glob.glob('/mnt/user-data/uploads/sentinel_s*.csv'))
    raw = pd.concat([load_raw(f) for f in files], ignore_index=True)
    print(f"baris: {len(raw)}  run: {raw.groupby(['surface','pattern','run_id']).ngroups}")
    df  = add_derived(raw)
    win = windowize(df)
    print(f"window: {len(win)}  fitur: {win.shape[1]-4}")
    print(win.groupby('surface').size().rename('n').to_string())
    win.to_csv('windows_v2.csv', index=False)
    df.to_csv('frames_v2.csv', index=False)
    print("disimpan: windows_v2.csv")


if __name__ == '__main__':
    main()
