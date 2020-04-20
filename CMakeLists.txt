PROJECT(main)
# CMake 最低版本号要求
cmake_minimum_required (version 2.8)

AUX_SOURCE_DIRECTORY(. DIR_SRCS)
ADD_EXECUTABLE(main ${DIR_SRCS})
