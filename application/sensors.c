





LOCAL void read_mpu6050(INT stacd, void *exinf)
{
    uint8_t who_am_i;
    int16_t ax, ay, az, gx, gy, gz;
    uint8_t data[14];
    uint8_t buf[2];

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(MUX_CH_MPU6050);

    buf[0] = MPU6050_PWR_MGMT;
    buf[1] = 0x00;
    HAL_I2C_Master_Transmit(&hi2c1, MPU6050_ADDR, buf, 2, 100);

    HAL_I2C_Mem_Read(&hi2c1, MPU6050_ADDR, MPU6050_WHO_AM_I,I2C_MEMADD_SIZE_8BIT, &who_am_i, 1, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);

    tm_printf((UB*)"MPU6050 (ch%d) WHO_AM_I: 0x%02X\r\n", MUX_CH_MPU6050, who_am_i);
    tk_dly_tsk(100);

    while (1) {
        tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
        pca9548a_select_channel(MUX_CH_MPU6050);
        HAL_I2C_Mem_Read(&hi2c1, MPU6050_ADDR, MPU6050_ACCEL,
                          I2C_MEMADD_SIZE_8BIT, data, 14, 100);
        tk_sig_sem(i2c_mux_mtx_id, 1);

        ax = (data[0] << 8) | data[1];
        ay = (data[2] << 8) | data[3];
        az = (data[4] << 8) | data[5];
        gx = (data[8] << 8) | data[9];
        gy = (data[10] << 8) | data[11];
        gz = (data[12] << 8) | data[13];

        tm_printf((UB*)"ACC: %6d %6d %6d | GYRO: %6d %6d %6d\r\n",
                  ax, ay, az, gx, gy, gz);
        tk_dly_tsk(200);
    }
}

LOCAL void read_ina219_1(INT stacd, void *exinf)
{
    const uint8_t dev_addr = INA219_ADDR;   // 0x40 << 1
    const uint8_t mux_ch   = MUX_CH_INA219_1;
    uint8_t data[2];
    int16_t shunt_raw, current_raw, power_raw, bus_raw;
    int32_t bus_mV, shunt_uV, current_mA, power_mW;
    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(mux_ch);

    uint8_t cfg[] = {INA219_CONFIG, 0x39, 0x9F};
    ret = HAL_I2C_Master_Transmit(&hi2c1, dev_addr, cfg, 3, 100);
    if (ret != HAL_OK) {
        tm_printf((UB*)"INA219 ch%d config FAIL\r\n", mux_ch);
    }

    uint8_t cal[] = {INA219_CALIB, 0x10, 0x00};
    HAL_I2C_Master_Transmit(&hi2c1, dev_addr, cal, 3, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);
    tk_dly_tsk(100);

    while (1) {
        tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
        pca9548a_select_channel(mux_ch);

        ret = HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_BUS_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        if (ret != HAL_OK) { tk_sig_sem(i2c_mux_mtx_id, 1); tk_dly_tsk(500); continue; }
        bus_raw = (data[0] << 8) | data[1];
        bus_mV = (bus_raw >> 3) * 4;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_SHUNT_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        shunt_raw = (data[0] << 8) | data[1];
        shunt_uV = shunt_raw * 10;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_CURRENT,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        current_raw = (data[0] << 8) | data[1];
        current_mA = current_raw;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_POWER,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        power_raw = (data[0] << 8) | data[1];
        power_mW = power_raw * 2;
        tk_sig_sem(i2c_mux_mtx_id, 1);

        tm_printf((UB*)"[ch%d 0x40] Bus: %ld.%03ld V | Shunt: %ld.%03ld mV | Current: %ld.%ld mA | Power: %ld mW\r\n",
                  mux_ch,
                  bus_mV / 1000, abs(bus_mV % 1000),
                  shunt_uV / 1000, abs(shunt_uV % 1000),
                  current_mA / 10, abs(current_mA % 10),
                  power_mW);
        tk_dly_tsk(500);
    }
}

LOCAL void read_ina219_2(INT stacd, void *exinf)
{
    const uint8_t dev_addr = 0x44 << 1;
    const uint8_t mux_ch   = MUX_CH_INA219_2;
    uint8_t data[2];
    int16_t shunt_raw, current_raw, power_raw, bus_raw;
    int32_t bus_mV, shunt_uV, current_mA, power_mW;
    HAL_StatusTypeDef ret;

    tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
    pca9548a_select_channel(mux_ch);

    uint8_t cfg[] = {INA219_CONFIG, 0x39, 0x9F};
    ret = HAL_I2C_Master_Transmit(&hi2c1, dev_addr, cfg, 3, 100);
    if (ret != HAL_OK) {
        tm_printf((UB*)"INA219 ch%d config FAIL\r\n", mux_ch);
    }

    uint8_t cal[] = {INA219_CALIB, 0x10, 0x00};
    HAL_I2C_Master_Transmit(&hi2c1, dev_addr, cal, 3, 100);
    tk_sig_sem(i2c_mux_mtx_id, 1);
    tk_dly_tsk(100);

    while (1) {
        tk_wai_sem(i2c_mux_mtx_id, 1, TMO_FEVR);
        pca9548a_select_channel(mux_ch);

        ret = HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_BUS_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        if (ret != HAL_OK) { tk_sig_sem(i2c_mux_mtx_id, 1); tk_dly_tsk(500); continue; }
        bus_raw = (data[0] << 8) | data[1];
        bus_mV = (bus_raw >> 3) * 4;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_SHUNT_V,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        shunt_raw = (data[0] << 8) | data[1];
        shunt_uV = shunt_raw * 10;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_CURRENT,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        current_raw = (data[0] << 8) | data[1];
        current_mA = current_raw;

        HAL_I2C_Mem_Read(&hi2c1, dev_addr, INA219_POWER,I2C_MEMADD_SIZE_8BIT, data, 2, 100);
        power_raw = (data[0] << 8) | data[1];
        power_mW = power_raw * 2;
        tk_sig_sem(i2c_mux_mtx_id, 1);

        tm_printf((UB*)"[ch%d 0x44] Bus: %ld.%03ld V | Shunt: %ld.%03ld mV | Current: %ld.%ld mA | Power: %ld mW\r\n",
                  mux_ch,
                  bus_mV / 1000, abs(bus_mV % 1000),
                  shunt_uV / 1000, abs(shunt_uV % 1000),
                  current_mA / 10, abs(current_mA % 10),
                  power_mW);
        tk_dly_tsk(500);
    }
}