cmake_minimum_required(VERSION 3.12)

set(PICO_PLATFORM "rp2350") # TDX Bord Uses RP2


# Pull in SDK (must set be before project)
include(pico_sdk_import.cmake)

project(mai_pico C CXX ASM)
set(CMAKE_C_STANDARD 11)

pico_sdk_init()

add_subdirectory(modules/aic_pico/firmware aic)
include_directories(modules/aic_pico/firmware/include)

add_subdirectory(src)
