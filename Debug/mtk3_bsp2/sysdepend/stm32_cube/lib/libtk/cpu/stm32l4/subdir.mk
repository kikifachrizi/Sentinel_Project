################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/int_stm32l4.c \
../mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/ptimer_stm32l4.c 

OBJS += \
./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/int_stm32l4.o \
./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/ptimer_stm32l4.o 

C_DEPS += \
./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/int_stm32l4.d \
./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/ptimer_stm32l4.d 


# Each subdirectory must supply rules for building sources it contributes
mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/%.o mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/%.su mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/%.cyclo: ../mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/%.c mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -D_STM32CUBE_NUCLEO_H533_ -DUSE_HAL_DRIVER -DSTM32H533xx -DsN_INTVEC=N_INTVEC -c -I../Core/Inc -I"/home/aiserver-kiki/low_lvl_sentinel/mtk3_bsp2" -I"/home/aiserver-kiki/low_lvl_sentinel/mtk3_bsp2/config" -I"/home/aiserver-kiki/low_lvl_sentinel/mtk3_bsp2/include" -I"/home/aiserver-kiki/low_lvl_sentinel/mtk3_bsp2/mtkernel/kernel/knlinc" -I../Drivers/STM32H5xx_HAL_Driver/Inc -I../Drivers/STM32H5xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H5xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-mtk3_bsp2-2f-sysdepend-2f-stm32_cube-2f-lib-2f-libtk-2f-cpu-2f-stm32l4

clean-mtk3_bsp2-2f-sysdepend-2f-stm32_cube-2f-lib-2f-libtk-2f-cpu-2f-stm32l4:
	-$(RM) ./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/int_stm32l4.cyclo ./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/int_stm32l4.d ./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/int_stm32l4.o ./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/int_stm32l4.su ./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/ptimer_stm32l4.cyclo ./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/ptimer_stm32l4.d ./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/ptimer_stm32l4.o ./mtk3_bsp2/sysdepend/stm32_cube/lib/libtk/cpu/stm32l4/ptimer_stm32l4.su

.PHONY: clean-mtk3_bsp2-2f-sysdepend-2f-stm32_cube-2f-lib-2f-libtk-2f-cpu-2f-stm32l4

