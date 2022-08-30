# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_examples_SRCS 变量
aux_source_directory(. DIR_examples_SRCS)

include_directories(../lib/Config)
<<<<<<< HEAD
include_directories(../lib/Infrared)

# 生成链接库
add_library(examples ${DIR_examples_SRCS})
target_link_libraries(examples PUBLIC Config Infrared)
=======


# 生成链接库
add_library(examples ${DIR_examples_SRCS})
target_link_libraries(examples PUBLIC Config)
>>>>>>> 7e056f6a9e5cd0170e6eb811af27530bfa236c2c
