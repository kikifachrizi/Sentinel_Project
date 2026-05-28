################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../mtk3_bsp2/mtkernel/kernel/tstdlib/bitop.c \
../mtk3_bsp2/mtkernel/kernel/tstdlib/string.c 

OBJS += \
./mtk3_bsp2/mtkernel/kernel/tstdlib/bitop.o \
./mtk3_bsp2/mtkernel/kernel/tstdlib/string.o 

C_DEPS += \
./mtk3_bsp2/mtkernel/kernel/tstdlib/bitop.d \
./mtk3_bsp2/mtkernel/kernel/tstdlib/string.d 


# Each subdirectory must supply rules for building sources it contributes
mtk3_bsp2/mtkernel/kernel/tstdlib/%.o mtk3_bsp2/mtkernel/kernel/tstdlib/%.su mtk3_bsp2/mtkernel/kernel/tstdlib/%.cyclo: ../mtk3_bsp2/mtkernel/kernel/tstdlib/%.c mtk3_bsp2/mtkernel/kernel/tstdlib/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -DsN_INTVEC=N_INTVEC -DUSE_HAL_DRIVER -DSTM32H533xx -D_STM32CUBE_NUCLEO_H533_ -c -I../Core/Inc -I"D:/Robotic/Sentinel/sentinel_code/sntnl_H533RE/mtk3_bsp2" -I"D:/Robotic/Sentinel/sentinel_code/sntnl_H533RE/mtk3_bsp2/config" -I"D:/Robotic/Sentinel/sentinel_code/sntnl_H533RE/mtk3_bsp2/include" -I"D:/Robotic/Sentinel/sentinel_code/sntnl_H533RE/mtk3_bsp2/mtkernel/kernel/knlinc" -I../Drivers/STM32H5xx_HAL_Driver/Inc -I../Drivers/STM32H5xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H5xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-mtk3_bsp2-2f-mtkernel-2f-kernel-2f-tstdlib

clean-mtk3_bsp2-2f-mtkernel-2f-kernel-2f-tstdlib:
	-$(RM) ./mtk3_bsp2/mtkernel/kernel/tstdlib/bitop.cyclo ./mtk3_bsp2/mtkernel/kernel/tstdlib/bitop.d ./mtk3_bsp2/mtkernel/kernel/tstdlib/bitop.o ./mtk3_bsp2/mtkernel/kernel/tstdlib/bitop.su ./mtk3_bsp2/mtkernel/kernel/tstdlib/string.cyclo ./mtk3_bsp2/mtkernel/kernel/tstdlib/string.d ./mtk3_bsp2/mtkernel/kernel/tstdlib/string.o ./mtk3_bsp2/mtkernel/kernel/tstdlib/string.su

.PHONY: clean-mtk3_bsp2-2f-mtkernel-2f-kernel-2f-tstdlib

