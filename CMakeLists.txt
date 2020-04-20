#PROJECT(main)
#CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
#AUX_SOURCE_DIRECTORY(. DIR_SRCS)
#ADD_EXECUTABLE(main ${DIR_SRCS})

#CMake 最低版本号要求
cmake_minimum_required(VERSION 2.8)
#项目信息
project(test)
# 查找当前目录下的所有源文件,并将名称保存到 src_file 变量
aux_source_directory(. src_file)
#添加test子目录
add_subdirectory(test)
#设置可执行文件的输出目录
#set(executable_output_path ${project_source_dir}/bin)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#制定生成目标
add_executable(main ${src_file})
#添加链接库
target_link_libraries(main test_sscanf)
