@echo off
title Tatanako's TDX IO Firmware Builder
echo #####################################################
echo #                                                   #
echo #        Tatanako's TDX IO Firmware Builder         #
echo #                                                   #
echo #####################################################
rmdir /s /q "build"
mkdir "build"
cd "build"
cmake .. -G "Ninja" -DPICO_PLATFORM=rp2350 -DPICO_TOOLCHAIN_PATH="C:/xpack-arm-none-eabi-gcc"
Ninja
echo #####################################################
echo                 Build Complete!
pause