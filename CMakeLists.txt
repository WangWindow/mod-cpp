cmake_minimum_required(VERSION 4.0)

# 注意：不同版本的 CMake 的实验性代码不同
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "a9e1cf81-9932-4810-974b-6eccaf14e457")
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