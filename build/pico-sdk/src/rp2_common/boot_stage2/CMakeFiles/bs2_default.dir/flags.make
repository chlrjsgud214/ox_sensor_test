# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# compile ASM with C:/tools/gcc-arm-none-eabi-10.3-2021.10/bin/arm-none-eabi-gcc.exe
ASM_DEFINES = -DPICO_BOARD=\"pico\" -DPICO_BUILD=1 -DPICO_NO_HARDWARE=0 -DPICO_ON_DEVICE=1

ASM_INCLUDES = -IC:/pico/pico-sdk/src/rp2_common/boot_stage2/asminclude -IC:/pico/pico-sdk/src/rp2040/hardware_regs/include -IC:/pico/pico-sdk/src/rp2_common/hardware_base/include -IC:/pico/pico-sdk/src/common/pico_base/include -IC:/gitprj/gitnas/lcd_ox_demo/build/generated/pico_base -IC:/pico/pico-sdk/src/boards/include -IC:/pico/pico-sdk/src/rp2_common/pico_platform/include -IC:/pico/pico-sdk/src/rp2_common/boot_stage2/include

ASM_FLAGS = -mcpu=cortex-m0plus -mthumb -O3 -DNDEBUG

