# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
<<<<<<< HEAD
  "C:/pico/pico-sdk/tools/elf2uf2"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2/tmp"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2/src/ELF2UF2Build-stamp"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2/src"
  "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2/src/ELF2UF2Build-stamp"
=======
  "D:/pico/pico-sdk/tools/elf2uf2"
  "C:/gitprj/ox_test/build/elf2uf2"
  "C:/gitprj/ox_test/build/elf2uf2"
  "C:/gitprj/ox_test/build/elf2uf2/tmp"
  "C:/gitprj/ox_test/build/elf2uf2/src/ELF2UF2Build-stamp"
  "C:/gitprj/ox_test/build/elf2uf2/src"
  "C:/gitprj/ox_test/build/elf2uf2/src/ELF2UF2Build-stamp"
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
<<<<<<< HEAD
    file(MAKE_DIRECTORY "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2/src/ELF2UF2Build-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2/src/ELF2UF2Build-stamp${cfgdir}") # cfgdir has leading slash
=======
    file(MAKE_DIRECTORY "C:/gitprj/ox_test/build/elf2uf2/src/ELF2UF2Build-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/gitprj/ox_test/build/elf2uf2/src/ELF2UF2Build-stamp${cfgdir}") # cfgdir has leading slash
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
endif()
