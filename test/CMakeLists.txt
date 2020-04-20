# 查找当前目录下的所有源文件,并将名称保存到 lib_src_file 变量
aux_source_directory(. lib_src_file)
#设置库文件的输出目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/test/lib)
#set(library_output_path ${project_source_dir}/test/lib)
#生成链接库
add_library(test_sscanf ${lib_src_file})
