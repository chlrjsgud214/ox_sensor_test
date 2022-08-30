cmake_minimum_required(VERSION 3.12)
include(pico_sdk_import.cmake)
project(Pico_ePaper_Code)
pico_sdk_init()

<<<<<<< HEAD
#添加编译子目录
add_subdirectory(lib/Config)
add_subdirectory(lib/Infrared)
=======
add_subdirectory(lib/Config)

>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
add_subdirectory(examples)



<<<<<<< HEAD
#添加头文件目录
include_directories(examples)
include_directories(./lib/Config)
include_directories(./lib/Infrared)


# 生成可执行文件
=======
include_directories(examples)
include_directories(./lib/Config)



>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
add_executable(main 
main.c
)

# enable usb output, disable uart output
pico_enable_stdio_usb(main 1)
pico_enable_stdio_uart(main 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(main)

<<<<<<< HEAD
target_link_libraries(main examples Infrared Config pico_stdlib hardware_spi)
=======
target_link_libraries(main examples Config pico_stdlib hardware_spi)
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
