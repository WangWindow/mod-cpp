cmake_minimum_required(VERSION 3.30)

# 注意：不同版本的 CMake 的实验性代码不同
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "0e5b6991-d74f-4b3d-a41c-cf096e0b2508")
set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS 1 CACHE BOOL "Suppress developer warnings")

# 设置项目名称和版本
project(modcpp VERSION 0.1 LANGUAGES CXX)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 设置 C++ 模块支持
set(CMAKE_CXX_MODULE_STD ON)

# 导出编译命令
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 添加可执行文件
add_executable(modcpp main.cpp)