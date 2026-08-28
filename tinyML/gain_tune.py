#!/usr/bin/env python3
"""
Analisis gain scheduling SENTINEL dari output command 'g' atau 'd'.

CARA PAKAI:
  # Rekam baseline NORMAL di keramik:
  m 0 0          # pastikan diam
  g              # tunggu 10 detik (atau h untuk silent)
  # Copy output ke file, lalu:
  python3 gain_tune.py normal.csv

  # Rekam dengan gain berbeda:
  u 85:0:110:50  # naikkan Kp
  m 0 0
  g
  python3 gain_tune.py normal.csv loaded_kp85.csv

CATATAN:
  Output 'g' mencatat steady-state saja jika robot sudah bergerak.
  Untuk melihat rise time, pastikan robot DIAM sebelum 'g' dimulai.
  Prosedur yang benar:
    m 0 0   → tunggu berhenti → m 50 50   → langsung 'g' di terminal
  Atau pakai output 'd' pola 1 atau 4 yang sudah berisi step response.
"""
import sys, csv, os
import math


def load_g(path):
    """Load output command g/h — 9 kolom: t,tgtL,tgtR,encL,encR,pwmL,pwmR,curL,curR"""
    rows = []
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('PID') or line.startswith('OK'):
                continue
            parts = line.split(',')
            if len(parts) < 7:
                continue
            try:
                rows.append([float(x) for x in parts[:9]])
            except ValueError:
                continue
    return rows


def load_d(path):
    """Load output command d — ambil kolom yang relevan."""
    rows = []
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#') or line.startswith('DC'):
                continue
            parts = line.split(',')
            if len(parts) < 12:
                continue
            try:
                # run_id,surface,pattern,t_ms,tgtL,tgtR,pwmL,pwmR,encL,encR,velL,velR,...
                t    = float(parts[3])
                tgtL = float(parts[4])
                encL = float(parts[8])
                encR = float(parts[9])
                pwmL = float(parts[6])
                pwmR = float(parts[7])
                rows.append([t, tgtL, 0, encL, encR, pwmL, pwmR, 0, 0])
            except (ValueError, IndexError):
                continue
    return rows


def vel_from_enc(rows):
    """Hitung kecepatan dari encoder (ticks/frame, normalized)."""
    vL, vR = [], []
    for i in range(1, len(rows)):
        dt = rows[i][0] - rows[i-1][0]
        if dt <= 0:
            vL.append(vL[-1] if vL else 0)
            vR.append(vR[-1] if vR else 0)
            continue
        dL = (rows[i][3] - rows[i-1][3]) / dt * 50  # normalize ke 50ms frame
        dR = (rows[i][4] - rows[i-1][4]) / dt * 50
        vL.append(dL)
        vR.append(dR)
    return vL, vR


def smooth(xs, w=3):
    out = []
    for i in range(len(xs)):
        lo, hi = max(0, i-w//2), min(len(xs), i+w//2+1)
        out.append(sum(xs[lo:hi])/(hi-lo))
    return out


def analyze(rows, label=""):
    if len(rows) < 10:
        return None

    # Deteksi apakah ada step (target berubah dari 0 ke nonzero)
    targets = [r[1] for r in rows]
    tgt_steady = max(set(targets), key=targets.count)
    if tgt_steady == 0:
        print(f"  {label}: target selalu 0 — robot tidak bergerak saat direkam")
        return None

    # Cari titik step (target pertama kali nonzero)
    step_idx = next((i for i, r in enumerate(rows) if abs(r[1]) > 0.1), 0)
    t0 = rows[step_idx][0]

    vL, vR = vel_from_enc(rows)
    vL, vR = smooth(vL), smooth(vR)
    tv = [rows[i][0] for i in range(1, len(rows))]

    # Geser indeks
    vi = max(0, step_idx - 1)
    vL_s = vL[vi:]
    tv_s = [t - t0 for t in tv[vi:]]

    # Rise time 90%
    rise = next((tv_s[i] for i, v in enumerate(vL_s)
                 if v >= 0.9 * tgt_steady), None)

    # Overshoot
    peak = max(vL_s) if vL_s else tgt_steady
    overshoot = (peak / tgt_steady - 1) * 100 if tgt_steady else 0

    # Steady state (40% data akhir)
    s = int(len(vL_s) * 0.6)
    ss_vel = sum(vL_s[s:]) / len(vL_s[s:]) if vL_s[s:] else tgt_steady
    sse = (ss_vel / tgt_steady - 1) * 100

    # Settling time
    band = 0.05 * tgt_steady
    settle = None
    for i in range(len(vL_s)-1, -1, -1):
        if abs(vL_s[i] - tgt_steady) > band:
            if i+1 < len(vL_s):
                settle = tv_s[i+1]
            break
    else:
        settle = 0.0

    # PWM steady state
    pwm_s = [rows[i+1][5] for i in range(vi, len(rows)-1)]
    pwm_steady = sum(pwm_s[s:]) / len(pwm_s[s:]) if pwm_s[s:] else 0

    # Deviasi L-R
    vR_s = vR[vi:]
    dev = abs(ss_vel - (sum(vR_s[s:])/len(vR_s[s:]) if vR_s[s:] else ss_vel))

    return {
        'label': label or os.path.basename(rows[0][0:1] and "data"),
        'target': tgt_steady,
        'rise_ms': rise,
        'overshoot_pct': overshoot,
        'settle_ms': settle,
        'sse_pct': sse,
        'pwm_steady': pwm_steady,
        'dev_LR': dev,
        'has_step': step_idx > 0 or targets[0] == 0,
    }


def fmt(v, spec=".1f"):
    if v is None: return "  n/a"
    return format(v, spec)


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)

    results = []
    for path in sys.argv[1:]:
        label = os.path.basename(path).replace('.csv','').replace('.txt','')
        if not os.path.exists(path):
            print(f"!! File tidak ditemukan: {path}")
            continue
        # Deteksi format
        with open(path) as f:
            first = next((l for l in f if l.strip() and
                         not l.startswith('OK') and
                         not l.startswith('PID')), '')
        cols = first.split(',')
        if len(cols) >= 12:
            rows = load_d(path)
        else:
            rows = load_g(path)

        if not rows:
            print(f"!! {label}: tidak ada data valid")
            continue
        r = analyze(rows, label)
        if r:
            results.append(r)

    if not results:
        print("Tidak ada hasil. Pastikan robot bergerak saat data direkam.")
        return

    # Print tabel
    w = 14
    print()
    hdr = "Metrik".ljust(22) + "".join(r['label'][:w].rjust(w) for r in results)
    print(hdr)
    print("-" * len(hdr))
    rows_fmt = [
        ("Target (ticks/f)", 'target', '.0f', ""),
        ("Rise time 90% (ms)", 'rise_ms', '.0f', "< 400"),
        ("Overshoot (%)", 'overshoot_pct', '+.1f', "< 20"),
        ("Settling time (ms)", 'settle_ms', '.0f', "< 1500"),
        ("Steady-state err (%)", 'sse_pct', '+.1f', "< 5"),
        ("PWM steady (counts)", 'pwm_steady', '.0f', ""),
        ("Dev L-R (ticks/f)", 'dev_LR', '.1f', "< 3"),
    ]
    for label, key, spec, goal in rows_fmt:
        line = label.ljust(22)
        for r in results:
            line += fmt(r.get(key), spec).rjust(w)
        if goal:
            line += f"   [{goal}]"
        print(line)
    print()
    if not results[0].get('has_step'):
        print("PERINGATAN: Data tidak mengandung step dari diam.")
        print("Rise time dan settling time tidak akurat.")
        print("Gunakan prosedur: m 0 0 → tunggu → m 50 50 → g")


if __name__ == '__main__':
    main()