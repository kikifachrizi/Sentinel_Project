#include <tk/tkernel.h>
#include <tm/tmonitor.h>
#include <stdlib.h>
#include <stdio.h>
#include "stm32h5xx_hal.h"
#include "lib/sensors.h"

MUX mux = { .hi2c = &hi2c1 , .addr = 0x70 << 1};
IMUSensor imu = { .hi2c = &hi2c1 , .addr = 0x68 << 1 , .muxChannel = 0};
INASensor ina1 = { .hi2c = &hi2c1 , .addr = 0x40 << 1, .muxChannel = 1 };
INASensor ina2 = { .hi2c = &hi2c1 , .addr = 0x44 << 1, .muxChannel = 2 };

LOCAL ID i2c_mux_mtx_id;
LOCAL T_CSEM csem_i2c_mux = { .isemcnt = 1, .maxsem = 1 , .sematr = TA_TFIFO };

EXPORT void initSensors(void){
    i2c_mux_mtx_id = tk_cre_sem(&csem_i2c_mux);
}

static HAL_StatusTypeDef pca9548a_select_channel(MUX *mux,uint8_t channel)
{
    uint8_t ch_mask = (1 << channel);
    return HAL_I2C_Master_Transmit(mux->hi2c, mux->addr, &ch_mask, 1, 100);
}

/* SENTINEL data-collect needs the IMU awake+configured BEFORE pidTask starts
 * reading it every frame - and it needs to be in a deterministic state
 * regardless of whether 'k' (IMU_DIAG) happened to run first or the board
 * just power-cycled. So the same write-then-verify config sequence diagIMU()
 * uses is done here too (single source of truth: the MPU6050_*_VALUE macros
 * in sensors.h), not just a bare wake-up like before. Same H1 lesson as
 * INA219: every write's return value is checked, config is read back and
 * compared, mismatches are reported - never assumed to have landed. */
EXPORT void initMpu6050(IMUSensor *imu){
    uint8_t who_am_i = 0;
    uint8_t buf[2];
    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux,imu->muxChannel);

    buf[0] = MPU6050_PWR_MGMT;
    buf[1] = 0x00; /* clear SLEEP bit - wake the chip */
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, buf, 2, 100);
    if (ret != HAL_OK) {
        tm_printf((UB*)"MPU6050 ch%d wake FAIL\r\n", imu->muxChannel);
    }

    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_WHO_AM_I,I2C_MEMADD_SIZE_8BIT, &who_am_i, 1, 100);

    uint8_t smplrt[2] = {MPU6050_SMPLRT_DIV, MPU6050_SMPLRT_DIV_VALUE};
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, smplrt, 2, 100);
    if (ret != HAL_OK) { tm_printf((UB*)"MPU6050 ch%d SMPLRT_DIV write FAIL\r\n", imu->muxChannel); }

    uint8_t dlpf[2] = {MPU6050_DLPF_CONFIG, MPU6050_DLPF_CONFIG_VALUE};
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, dlpf, 2, 100);
    if (ret != HAL_OK) { tm_printf((UB*)"MPU6050 ch%d CONFIG(DLPF) write FAIL\r\n", imu->muxChannel); }

    uint8_t gcfg[2] = {MPU6050_GYRO_CONFIG, MPU6050_GYRO_CONFIG_VALUE};
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, gcfg, 2, 100);
    if (ret != HAL_OK) { tm_printf((UB*)"MPU6050 ch%d GYRO_CONFIG write FAIL\r\n", imu->muxChannel); }

    uint8_t acfg[2] = {MPU6050_ACCEL_CONFIG, MPU6050_ACCEL_CONFIG_VALUE};
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, acfg, 2, 100);
    if (ret != HAL_OK) { tm_printf((UB*)"MPU6050 ch%d ACCEL_CONFIG write FAIL\r\n", imu->muxChannel); }

    uint8_t smplrtRb = 0, dlpfRb = 0, gcfgRb = 0, acfgRb = 0;
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_SMPLRT_DIV,   I2C_MEMADD_SIZE_8BIT, &smplrtRb, 1, 100);
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_DLPF_CONFIG,  I2C_MEMADD_SIZE_8BIT, &dlpfRb,   1, 100);
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_GYRO_CONFIG,  I2C_MEMADD_SIZE_8BIT, &gcfgRb,   1, 100);
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_ACCEL_CONFIG, I2C_MEMADD_SIZE_8BIT, &acfgRb,   1, 100);

    tk_sig_sem(i2c_mux_mtx_id, 1);

    tm_printf((UB*)"MPU6050 (ch%d) WHO_AM_I: 0x%02X\r\n", imu->muxChannel, who_am_i);
    if (smplrtRb != MPU6050_SMPLRT_DIV_VALUE || dlpfRb != MPU6050_DLPF_CONFIG_VALUE ||
        gcfgRb != MPU6050_GYRO_CONFIG_VALUE || acfgRb != MPU6050_ACCEL_CONFIG_VALUE) {
        tm_printf((UB*)"MPU6050 (ch%d) CONFIG MISMATCH: SMPLRT=0x%02X CONFIG=0x%02X GYRO_CFG=0x%02X ACCEL_CFG=0x%02X (expected 0x%02X 0x%02X 0x%02X 0x%02X)\r\n",
                   imu->muxChannel, smplrtRb, dlpfRb, gcfgRb, acfgRb,
                   MPU6050_SMPLRT_DIV_VALUE, MPU6050_DLPF_CONFIG_VALUE, MPU6050_GYRO_CONFIG_VALUE, MPU6050_ACCEL_CONFIG_VALUE);
    }
    tk_dly_tsk(100);
}

EXPORT void initINA219(INASensor *ina){
    const uint8_t dev_addr = ina->addr;   // 0x40 << 1
    const uint8_t mux_ch   = ina->muxChannel;

    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux,mux_ch);

    uint8_t cfg[] = {INA219_CONFIG, (uint8_t)(INA219_CONFIG_VALUE >> 8), (uint8_t)(INA219_CONFIG_VALUE & 0xFF)};
    ret = HAL_I2C_Master_Transmit(ina->hi2c, dev_addr, cfg, 3, 100);
    if (ret != HAL_OK) {
        tm_printf((UB*)"INA219 ch%d config FAIL\r\n", mux_ch);
    }

    /* Kalibrasi: R_SHUNT=0.1ohm (R100, dikonfirmasi multimeter - lihat commands.c
     * git log), Max_Expected_Current=3.2A (batas alami: di atas ini V_shunt
     * lewat dari rentang PGA /8=320mV yang di-set di CONFIG di atas).
     * Current_LSB = 3.2A/32768 = 0.0976 -> dibulatkan 0.1 mA/bit.
     * Cal = trunc(0.04096 / (Current_LSB(A) * R_SHUNT(ohm)))
     *     = trunc(0.04096 / (0.0001 * 0.1)) = 4096 = 0x1000 (pas, tanpa pembulatan).
     * Diverifikasi cocok dengan pengukuran multimeter: V_shunt=45mV -> ShuntReg=4499
     * -> CurrentReg=(4499*4096)/4096=4499 -> 449.9mA, vs 450mA multimeter (match).
     * current_mA = current_raw/10 (LSB=0.1mA) - lihat readINA219().
     * Power_LSB = 20 * Current_LSB = 2mW/bit - lihat readINA219(). */
    uint8_t cal[] = {INA219_CALIB, (uint8_t)(INA219_CAL_VALUE >> 8), (uint8_t)(INA219_CAL_VALUE & 0xFF)};
    ret = HAL_I2C_Master_Transmit(ina->hi2c, dev_addr, cal, 3, 100);
    if (ret != HAL_OK) {
        /* Return value was silently ignored before - this is exactly H1 from
         * INA_DIAG ('j'): if this write fails, 0x05 never gets programmed and
         * every current/power reading downstream is meaningless. */
        tm_printf((UB*)"INA219 ch%d calib FAIL\r\n", mux_ch);
    }

    /* Read back 0x05 immediately (still holding the semaphore) so H1 is
     * checked on EVERY boot, not only when 'j' is sent manually. If this
     * prints MISMATCH (or CALIB reads 0x0000), the chip's internal
     * CurrentReg=(ShuntReg*Cal)/4096 is computing against the WRONG (or
     * zero) Cal - current_mA will be wrong/always-zero no matter what the
     * conversion math below does, because the chip itself never got the
     * calibration. */
    uint8_t calReadback[2] = {0, 0};
    HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_CALIB, I2C_MEMADD_SIZE_8BIT, calReadback, 2, 100);
    uint16_t calNow = (uint16_t)(((uint16_t)calReadback[0] << 8) | calReadback[1]);
    tm_printf((UB*)"INA219 ch%d CALIB boot readback: expected=0x%04X actual=0x%04X %s\r\n",
               mux_ch, (unsigned)INA219_CAL_VALUE, calNow,
               (calNow == (uint16_t)INA219_CAL_VALUE) ? "MATCH" : "MISMATCH (H1!)");

    tk_sig_sem(i2c_mux_mtx_id, 1);
    tk_dly_tsk(100);

    /* Offset nol otomatis per sensor, dalam satuan RAW register (bukan mA -
     * lihat readINA219()): motorLeft/motorRight belum di-init
     * (initMotorController() jalan SESUDAH initINA219() di usermain(), PWM
     * timer belum start) - jadi arus motor pasti 0 di titik ini, aman untuk
     * dijadikan baseline. Dilakukan via readINA219() biasa (bukan di dalam
     * kritis section semaphore di atas - readINA219() ambil semaphore-nya
     * sendiri, menangkap di sini akan deadlock kalau masih dipegang). */
    ina->current_offset_raw = 0; /* pastikan baseline 0 selama sampling ini sendiri */
    long sum = 0;
    const int N = 8;
    for(int i = 0; i < N; i++){
        readINA219(ina);
        sum += ina->current_raw;
        tk_dly_tsk(10);
    }
    ina->current_offset_raw = (int32_t)(sum / N);
    tm_printf((UB*)"INA219 ch%d zero-current offset: raw=%ld (%ld.%01ld mA)\r\n", mux_ch,
               (long)ina->current_offset_raw,
               (long)ina->current_offset_raw / 10, labs((long)ina->current_offset_raw % 10));
}

static const char *halStatusStr(HAL_StatusTypeDef s){
    switch(s){
        case HAL_OK:      return "HAL_OK";
        case HAL_ERROR:   return "HAL_ERROR";
        case HAL_BUSY:    return "HAL_BUSY";
        case HAL_TIMEOUT: return "HAL_TIMEOUT";
        default:          return "HAL_?";
    }
}

/* INA_DIAG ('j'): raw, no-conversion register dump + every I2C return value,
 * for BOTH sensors. Re-issues the same CONFIG/CALIB writes initINA219() does
 * (idempotent - same values) so H1 (write silently failing) can be tested
 * live instead of trusting what may or may not have happened at boot.
 * Written back via writeCom(com,...) - NOT tm_printf - so it lands on the
 * SAME port 'j' was sent on, instead of USART2/ST-Link VCP (see tm_com.c). */
EXPORT void diagINA219(INASensor *ina, UartBridge *com){
    const uint8_t dev_addr = ina->addr;
    const uint8_t mux_ch   = ina->muxChannel;
    HAL_StatusTypeDef ret;
    uint8_t data[2];
    char line[96];

    static const uint8_t  reg_addr[6] = { INA219_CONFIG, INA219_SHUNT_V, INA219_BUS_V,
                                           INA219_POWER, INA219_CURRENT, INA219_CALIB };
    static const char    *reg_name[6] = { "CONFIG", "SHUNT_V", "BUS_V", "POWER", "CURRENT", "CALIB" };
    uint16_t regs[6] = {0};

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);

    ret = pca9548a_select_channel(&mux, mux_ch);
    snprintf(line, sizeof(line), "[INA ch%d 0x%02X] mux select      : %s\r\n", mux_ch, dev_addr, halStatusStr(ret));
    writeCom(com, line);

    ret = HAL_I2C_IsDeviceReady(ina->hi2c, dev_addr, 3, 100);
    snprintf(line, sizeof(line), "[INA ch%d 0x%02X] probe (ACK?)     : %s\r\n", mux_ch, dev_addr, halStatusStr(ret));
    writeCom(com, line);

    uint8_t cfg[] = {INA219_CONFIG, (uint8_t)(INA219_CONFIG_VALUE >> 8), (uint8_t)(INA219_CONFIG_VALUE & 0xFF)};
    ret = HAL_I2C_Master_Transmit(ina->hi2c, dev_addr, cfg, 3, 100);
    snprintf(line, sizeof(line), "[INA ch%d 0x%02X] write CONFIG=0x%04X : %s\r\n", mux_ch, dev_addr, (unsigned)INA219_CONFIG_VALUE, halStatusStr(ret));
    writeCom(com, line);

    uint8_t cal[] = {INA219_CALIB, (uint8_t)(INA219_CAL_VALUE >> 8), (uint8_t)(INA219_CAL_VALUE & 0xFF)};
    ret = HAL_I2C_Master_Transmit(ina->hi2c, dev_addr, cal, 3, 100);
    snprintf(line, sizeof(line), "[INA ch%d 0x%02X] write CALIB=0x%04X  : %s\r\n", mux_ch, dev_addr, (unsigned)INA219_CAL_VALUE, halStatusStr(ret));
    writeCom(com, line);

    for(int r = 0; r < 6; r++){
        data[0] = 0; data[1] = 0;
        ret = HAL_I2C_Mem_Read(ina->hi2c, dev_addr, reg_addr[r], I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        regs[r] = (uint16_t)(((uint16_t)data[0] << 8) | data[1]);
        snprintf(line, sizeof(line), "[INA ch%d 0x%02X] reg 0x%02X %-8s = 0x%04X  (%s)\r\n",
                   mux_ch, dev_addr, reg_addr[r], reg_name[r], regs[r], halStatusStr(ret));
        writeCom(com, line);
    }

    tk_sig_sem(i2c_mux_mtx_id, 1);

    /* CURRENT decimal cross-check (item 1 dari REGRESI): reg 0x04 sudah
     * kelihatan mentah di dump hex di atas, ini versi desimal langsung +
     * offset yang lagi dipakai + current_mA hasil akhir, biar tidak perlu
     * hitung hex manual buat verifikasi bug pembulatan-ke-nol. */
    {
        int16_t curRawSigned = (int16_t)regs[4];
        long dmA = (long)curRawSigned - (long)ina->current_offset_raw;
        long mA  = (dmA >= 0) ? (dmA + 5) / 10 : (dmA - 5) / 10;
        snprintf(line, sizeof(line), "[INA ch%d 0x%02X] CURRENT raw=%d offset_raw=%ld -> current_mA=%ld\r\n",
                   mux_ch, dev_addr, curRawSigned, (long)ina->current_offset_raw, mA);
        writeCom(com, line);
    }

    snprintf(line, sizeof(line), "[INA ch%d 0x%02X] CALIB expected=0x%04X readback=0x%04X -> %s\r\n",
               mux_ch, dev_addr, (unsigned)INA219_CAL_VALUE, regs[5],
               (regs[5] == (uint16_t)INA219_CAL_VALUE) ? "MATCH" : "MISMATCH (H1: write never landed)");
    writeCom(com, line);
}

EXPORT HAL_StatusTypeDef readMPU6050(IMUSensor *imu)
{
    uint8_t data[14];
    HAL_StatusTypeDef ret;
    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux,imu->muxChannel);
    ret = HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_ACCEL,
                        I2C_MEMADD_SIZE_8BIT, data, 14, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);

    /* MASALAH 1 fix: dulu return value ini tidak pernah dicek - kalau read
     * gagal, data[14] (stack, TIDAK diinisialisasi) tetap ditafsirkan
     * sebagai data sensor asli. Sekarang: gagal -> ax..gz TIDAK disentuh
     * (biarkan nilai lama, bukan sampah stack baru). */
    if (ret != HAL_OK) {
        return ret;
    }

    imu->ax = (data[0] << 8) | data[1];
    imu->ay = (data[2] << 8) | data[3];
    imu->az = (data[4] << 8) | data[5];
    imu->gx = (data[8] << 8) | data[9];
    imu->gy = (data[10] << 8) | data[11];
    imu->gz = (data[12] << 8) | data[13];
    return ret;
}

EXPORT HAL_StatusTypeDef readINA219(INASensor *ina)
{
    uint8_t data[2];
    int16_t shunt_raw, current_raw, power_raw, bus_raw;
    const uint8_t mux_ch   = ina->muxChannel;
    const uint8_t dev_addr = ina->addr;   // 0x40 << 1
    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux,mux_ch);

    ret = HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_BUS_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
    if (ret != HAL_OK) {
        tk_sig_sem(i2c_mux_mtx_id, 1);
        return ret;
    }
    bus_raw = (data[0] << 8) | data[1];
    ina->bus_mV = (bus_raw >> 3) * 4;

    /* MASALAH 1 fix: dulu cuma baca BUS_V yang dijaga - 3 baca berikutnya
     * (SHUNT_V/CURRENT/POWER) TIDAK dicek return value-nya. Kalau salah
     * satu gagal, field-nya ditulis dari `data[]` bekas baca SEBELUMNYA
     * (bukan sekadar "tidak berubah" - malah nilai PALSU yang kelihatan
     * seperti pembacaan baru). Sekarang tiap baca dijaga, gagal -> berhenti
     * di situ, field yang belum sempat dibaca TIDAK disentuh sama sekali. */
    ret = HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_SHUNT_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
    if (ret != HAL_OK) {
        tk_sig_sem(i2c_mux_mtx_id, 1);
        return ret;
    }
    shunt_raw = (data[0] << 8) | data[1];
    ina->shunt_uV = shunt_raw * 10;

    ret = HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_CURRENT,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
    if (ret != HAL_OK) {
        tk_sig_sem(i2c_mux_mtx_id, 1);
        return ret;
    }
    current_raw = (data[0] << 8) | data[1];
    ina->current_raw = current_raw; /* untouched raw, for diagnostics - see 'j' and STATIC CSV */

    /* REGRESI FIX (sebelumnya): current_mA dulu current_raw/10 (integer,
     * truncate toward zero) - untuk nilai raw kecil itu MEMBULATKAN KE NOL.
     * Perbaikan: kurangi offset DULU di satuan raw (deci-mA, presisi penuh,
     * TANPA pembagian), baru bagi 10 SEKALI di akhir dengan pembulatan ke
     * terdekat (bukan truncate), jadi arus kecil-tapi-nyata tidak lenyap. */
    long current_dmA = (long)current_raw - (long)ina->current_offset_raw; /* deci-mA, presisi penuh */
    ina->current_mA = (current_dmA >= 0) ? (current_dmA + 5) / 10 : (current_dmA - 5) / 10;

    ret = HAL_I2C_Mem_Read(ina->hi2c, dev_addr, INA219_POWER,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
    if (ret == HAL_OK) {
        power_raw = (data[0] << 8) | data[1];
        ina->power_mW = power_raw * 2; /* Power_LSB = 20*Current_LSB = 20*0.1mA = 2mW/bit */
    }
    tk_sig_sem(i2c_mux_mtx_id, 1);
    return ret;
}

/* KOREKSI: standalone read of reg 0x01 - deliberately duplicated, NOT
 * derived from readINA219()'s shunt_uV. If the bug is inside readINA219()
 * itself (wrong register, wrong shift, wrong sign extension), deriving from
 * its output would inherit the exact same bug and prove nothing. This
 * function shares only the mux-select/semaphore plumbing (needed for I2C
 * bus safety) - the register read and interpretation are written fresh,
 * independently. No conversion, no scale, no offset - raw signed int16,
 * big-endian, exactly as it comes off the wire. */
EXPORT int16_t readShuntRawIndependent(INASensor *ina){
    uint8_t data[2] = {0, 0};
    int16_t raw = 0;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(&mux, ina->muxChannel);
    HAL_I2C_Mem_Read(ina->hi2c, ina->addr, INA219_SHUNT_V, I2C_MEMADD_SIZE_8BIT, data, 2, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);

    raw = (int16_t)(((uint16_t)data[0] << 8) | (uint16_t)data[1]);
    return raw;
}

EXPORT void debugINA219(INASensor *ina){
    /* current_mA sudah dalam satuan mA utuh (Current_LSB=1mA/bit), jadi
     * dicetak langsung - dulu di-/10 (mengira LSB=0.1mA), itu salah. */
    tm_printf((UB*)"[ch%d 0x40] Bus: %ld.%03ld V | Shunt: %ld.%03ld mV | Current: %ld mA | Power: %ld mW\r\n",
    ina->muxChannel,
    ina->bus_mV / 1000, abs(ina->bus_mV % 1000),
    ina->shunt_uV / 1000, abs(ina->shunt_uV % 1000),
    ina->current_mA,
    ina->power_mW);
}

EXPORT void debugMPU6050(IMUSensor *imu){
    tm_printf((UB*)"ACC: %6d %6d %6d | GYRO: %6d %6d %6d\r\n",
                imu->ax, imu->ay, imu->az, imu->gx, imu->gy, imu->gz);
}

/* IMU_DIAG ('k'): IMU is on the SAME I2C mux as INA219 (mux ch%d - see
 * imu->muxChannel below) but has NEVER been verified - initMpu6050() isn't
 * even called from usermain() right now (commented out), so the chip is
 * still asleep (PWR_MGMT_1 SLEEP bit set at power-on) until this runs.
 * "Verifikasi dulu, integrasi belakangan": every write here is checked and
 * read back, nothing is assumed. Blocks ~10s (the streaming section) - the
 * caller (logTest task, via imuDiagActive) must NOT be comTask. */
EXPORT void diagIMU(IMUSensor *imu, UartBridge *com){
    HAL_StatusTypeDef ret;
    uint8_t byte;
    char line[128];

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);

    ret = pca9548a_select_channel(&mux, imu->muxChannel);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] mux select : %s (shares I2C mux with INA219: ina1=ch%d, ina2=ch%d)\r\n",
               imu->muxChannel, imu->addr, halStatusStr(ret), ina1.muxChannel, ina2.muxChannel);
    writeCom(com, line);

    ret = HAL_I2C_IsDeviceReady(imu->hi2c, imu->addr, 3, 100);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] probe (ACK?) : %s\r\n", imu->muxChannel, imu->addr, halStatusStr(ret));
    writeCom(com, line);

    /* Identity */
    byte = 0;
    ret = HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_WHO_AM_I, I2C_MEMADD_SIZE_8BIT, &byte, 1, 100);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] WHO_AM_I=0x%02X (%s) : %s\r\n",
               imu->muxChannel, imu->addr, byte, (byte == 0x68) ? "expected MPU6050" : "UNEXPECTED - not MPU6050 or not answering",
               halStatusStr(ret));
    writeCom(com, line);

    /* Init writes, EVERY return value checked - not assumed (see WHO_AM_I above too) */
    uint8_t pwr[2] = {MPU6050_PWR_MGMT, 0x00}; /* clear SLEEP bit - wake the chip */
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, pwr, 2, 100);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] write PWR_MGMT_1=0x00 (wake) : %s\r\n", imu->muxChannel, imu->addr, halStatusStr(ret));
    writeCom(com, line);

    uint8_t smplrt[2] = {MPU6050_SMPLRT_DIV, MPU6050_SMPLRT_DIV_VALUE};
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, smplrt, 2, 100);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] write SMPLRT_DIV=0x%02X : %s\r\n", imu->muxChannel, imu->addr, MPU6050_SMPLRT_DIV_VALUE, halStatusStr(ret));
    writeCom(com, line);

    uint8_t dlpf[2] = {MPU6050_DLPF_CONFIG, MPU6050_DLPF_CONFIG_VALUE};
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, dlpf, 2, 100);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] write CONFIG(DLPF)=0x%02X : %s\r\n", imu->muxChannel, imu->addr, MPU6050_DLPF_CONFIG_VALUE, halStatusStr(ret));
    writeCom(com, line);

    uint8_t gcfg[2] = {MPU6050_GYRO_CONFIG, MPU6050_GYRO_CONFIG_VALUE};
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, gcfg, 2, 100);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] write GYRO_CONFIG=0x%02X : %s\r\n", imu->muxChannel, imu->addr, MPU6050_GYRO_CONFIG_VALUE, halStatusStr(ret));
    writeCom(com, line);

    uint8_t acfg[2] = {MPU6050_ACCEL_CONFIG, MPU6050_ACCEL_CONFIG_VALUE};
    ret = HAL_I2C_Master_Transmit(imu->hi2c, imu->addr, acfg, 2, 100);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] write ACCEL_CONFIG=0x%02X : %s\r\n", imu->muxChannel, imu->addr, MPU6050_ACCEL_CONFIG_VALUE, halStatusStr(ret));
    writeCom(com, line);

    /* Read back config registers, RAW HEX, from the chip - not the values
     * firmware just tried to write (H1 lesson from INA219). */
    uint8_t smplrtRb = 0, dlpfRb = 0, gcfgRb = 0, acfgRb = 0;
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_SMPLRT_DIV,   I2C_MEMADD_SIZE_8BIT, &smplrtRb, 1, 100);
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_DLPF_CONFIG,  I2C_MEMADD_SIZE_8BIT, &dlpfRb,   1, 100);
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_GYRO_CONFIG,  I2C_MEMADD_SIZE_8BIT, &gcfgRb,   1, 100);
    HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_ACCEL_CONFIG, I2C_MEMADD_SIZE_8BIT, &acfgRb,   1, 100);

    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] reg 0x19 SMPLRT_DIV  = 0x%02X (expected 0x%02X, %s)\r\n",
               imu->muxChannel, imu->addr, smplrtRb, MPU6050_SMPLRT_DIV_VALUE, (smplrtRb == MPU6050_SMPLRT_DIV_VALUE) ? "MATCH" : "MISMATCH");
    writeCom(com, line);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] reg 0x1A CONFIG      = 0x%02X (expected 0x%02X, %s)\r\n",
               imu->muxChannel, imu->addr, dlpfRb, MPU6050_DLPF_CONFIG_VALUE, (dlpfRb == MPU6050_DLPF_CONFIG_VALUE) ? "MATCH" : "MISMATCH");
    writeCom(com, line);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] reg 0x1B GYRO_CONFIG = 0x%02X (expected 0x%02X, %s)\r\n",
               imu->muxChannel, imu->addr, gcfgRb, MPU6050_GYRO_CONFIG_VALUE, (gcfgRb == MPU6050_GYRO_CONFIG_VALUE) ? "MATCH" : "MISMATCH");
    writeCom(com, line);
    snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] reg 0x1C ACCEL_CONFIG= 0x%02X (expected 0x%02X, %s)\r\n",
               imu->muxChannel, imu->addr, acfgRb, MPU6050_ACCEL_CONFIG_VALUE, (acfgRb == MPU6050_ACCEL_CONFIG_VALUE) ? "MATCH" : "MISMATCH");
    writeCom(com, line);

    /* Derive FS range / sensitivity / ODR from the READ-BACK bits, not the
     * intended constants - if a write silently failed, this reports what
     * the chip is ACTUALLY doing, matching the mismatch flagged above. */
    {
        static const int32_t accelFS_g[4]        = {2, 4, 8, 16};
        static const int32_t accelSensLSBperG[4]  = {16384, 8192, 4096, 2048}; /* exact integers */
        static const int32_t gyroFS_dps[4]        = {250, 500, 1000, 2000};
        static const int32_t gyroSensX10[4]       = {1310, 655, 328, 164}; /* LSB per (deg/s), x10 - exact as fraction, avoids float */

        int afsSel = (acfgRb >> 3) & 0x3;
        int fsSel  = (gcfgRb >> 3) & 0x3;
        int dlpfCfg = dlpfRb & 0x7;
        uint32_t gyroOutHz = (dlpfCfg == 0 || dlpfCfg == 7) ? 8000u : 1000u;
        uint32_t sampleRateHz = gyroOutHz / (1u + (uint32_t)smplrtRb);

        snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] accel range=+-%ldg sens=%ld LSB/g\r\n",
                   imu->muxChannel, imu->addr, (long)accelFS_g[afsSel], (long)accelSensLSBperG[afsSel]);
        writeCom(com, line);
        snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] gyro  range=+-%ld dps sens=%ld.%ld LSB/(deg/s)\r\n",
                   imu->muxChannel, imu->addr, (long)gyroFS_dps[fsSel], (long)gyroSensX10[fsSel] / 10, (long)gyroSensX10[fsSel] % 10);
        writeCom(com, line);
        snprintf(line, sizeof(line), "[IMU ch%d 0x%02X] DLPF_CFG=%d gyroOutputRate=%luHz sampleRate=%luHz (SMPLRT_DIV=%u)\r\n",
                   imu->muxChannel, imu->addr, dlpfCfg, (unsigned long)gyroOutHz, (unsigned long)sampleRateHz, smplrtRb);
        writeCom(com, line);
    }

    /* Timing: one full 14-byte burst read (ACCEL_XOUT_H..GYRO_ZOUT_L),
     * DWT-wrapped. DWT is already enabled once at startup (usermain) -
     * cycles->us computed locally from SystemCoreClock, no dependency on
     * app_main.c's static pidProbeCycPerMs. */
    {
        uint8_t buf[14];
        uint32_t cycPerUs = SystemCoreClock / 1000000u;
        uint32_t t0 = DWT->CYCCNT;
        ret = HAL_I2C_Mem_Read(imu->hi2c, imu->addr, MPU6050_ACCEL, I2C_MEMADD_SIZE_8BIT, buf, 14, 100);
        uint32_t t1 = DWT->CYCCNT;
        uint32_t us = (t1 - t0) / (cycPerUs ? cycPerUs : 1u);
        snprintf(line, sizeof(line), "IMU_READ_US,%lu\r\n", (unsigned long)us);
        writeCom(com, line);
    }

    tk_sig_sem(i2c_mux_mtx_id, 1); /* release before the 10s streaming loop below - don't hold the I2C mux semaphore across a 10s sleep */

    /* Streaming: raw ax,ay,az,gx,gy,gz, once per 200ms for 10s. Reuses
     * readMPU6050() deliberately (unlike the INA219 shunt_raw case) - that
     * function has NEVER been exercised/verified either (imuTask is
     * disabled), so running it here IS part of the verification, not a
     * shortcut that could hide a known bug. */
    SYSTIM startTime, now;
    tk_get_tim(&startTime);
    while(1){
        tk_get_tim(&now);
        UW elapsed = now.lo - startTime.lo;
        if(elapsed >= 10000) break;

        readMPU6050(imu);
        snprintf(line, sizeof(line), "IMU,%lu,%d,%d,%d,%d,%d,%d\r\n",
                   (unsigned long)elapsed, imu->ax, imu->ay, imu->az, imu->gx, imu->gy, imu->gz);
        writeCom(com, line);

        tk_dly_tsk(200);
    }
}
