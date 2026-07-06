################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../application/app_main.c 

OBJS += \
./application/app_main.o 

C_DEPS += \
./application/app_main.d 


# Each subdirectory must supply rules for building sources it contributes
application/%.o application/%.su application/%.cyclo: ../application/%.c application/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m33 -std=gnu11 -g3 -DDEBUG -D_STM32CUBE_NUCLEO_H533_ -DUSE_HAL_DRIVER -DSTM32H533xx -DsN_INTVEC=N_INTVEC -c -I../Core/Inc -I"/home/kiki/sentinel_ws/mtk3_bsp2" -I"/home/kiki/sentinel_ws/mtk3_bsp2/config" -I"/home/kiki/sentinel_ws/mtk3_bsp2/include" -I"/home/kiki/sentinel_ws/mtk3_bsp2/mtkernel/kernel/knlinc" -I../Drivers/STM32H5xx_HAL_Driver/Inc -I../Drivers/STM32H5xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H5xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-application

clean-application:
	-$(RM) ./application/app_main.cyclo ./application/app_main.d ./application/app_main.o ./application/app_main.su

.PHONY: clean-application

