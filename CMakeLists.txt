cmake_minimum_required(VERSION 3.10)
project(kelidoscope VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
 src/main.cpp
 src/lexer.cpp
 )

target_include_directories(${PROJECT_NAME} PRIVATE include)

