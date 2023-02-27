#CMake 最低版本号要求
cmake_minimum_required(VERSION 3.8)
project(codelabs_c)

set(CMAKE_CXX_STANDARD 11)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(./src DIR_SRCS)
aux_source_directory(./src/array DIR_SRCS)

# 指定生成目标
add_executable(codelabs_c ${DIR_SRCS})