<<<<<<< HEAD
# Install script for directory: C:/pico/pico-sdk/tools/elf2uf2
=======
# Install script for directory: D:/pico/pico-sdk/tools/elf2uf2
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/elf2uf2")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
<<<<<<< HEAD
  set(CMAKE_OBJDUMP "C:/tools/mingw32/bin/objdump.exe")
=======
  set(CMAKE_OBJDUMP "D:/tools/mingw32/bin/objdump.exe")
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<< HEAD
  include("C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2/boot_uf2_headers/cmake_install.cmake")
=======
  include("C:/gitprj/ox_test/build/elf2uf2/boot_uf2_headers/cmake_install.cmake")
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "C:/Users/Choi/Downloads/Pico_2CH_RS232_Code/C/build/elf2uf2/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "C:/gitprj/ox_test/build/elf2uf2/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
