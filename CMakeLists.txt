# 最低版本要求和项目名称
cmake_minimum_required(VERSION 3.29.0)
project(LowPassFilter)
# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
# 添加源文件列表
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
# 创建共享库
add_library(common
SHARED
${SRC_LISTS}
)
# 设置库的头文件目录
target_include_directories(common
PUBLIC
${PROJECT_SOURCE_DIR}/include
)
# 添加可执行文件
add_executable(LowPassFilter main.cpp)

# 链接库
target_link_libraries(LowPassFilter
PUBLIC
common
)