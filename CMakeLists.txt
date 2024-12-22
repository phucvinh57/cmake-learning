cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(hello VERSION 1.2.3)

configure_file(config.h.in config.h)
add_executable(${PROJECT_NAME} main.cc)
target_include_directories(${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/lib/mymath"
)
add_subdirectory(lib/mymath)
target_link_libraries(${PROJECT_NAME} mymath)