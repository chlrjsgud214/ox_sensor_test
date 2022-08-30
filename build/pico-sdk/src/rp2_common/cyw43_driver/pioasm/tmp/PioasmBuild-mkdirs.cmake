# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
<<<<<<< HEAD
  "C:/pico/pico-sdk/tools/pioasm"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/pioasm"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/tmp"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp"
=======
  "D:/pico/pico-sdk/tools/pioasm"
  "C:/gitprj/ox_test/build/pioasm"
  "C:/gitprj/ox_test/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm"
  "C:/gitprj/ox_test/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/tmp"
  "C:/gitprj/ox_test/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp"
  "C:/gitprj/ox_test/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src"
  "C:/gitprj/ox_test/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp"
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
<<<<<<< HEAD
    file(MAKE_DIRECTORY "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp${cfgdir}") # cfgdir has leading slash
=======
    file(MAKE_DIRECTORY "C:/gitprj/ox_test/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/gitprj/ox_test/build/pico-sdk/src/rp2_common/cyw43_driver/pioasm/src/PioasmBuild-stamp${cfgdir}") # cfgdir has leading slash
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
endif()
