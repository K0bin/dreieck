cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(DreieckExe LANGUAGES CXX C)

add_subdirectory(vendor)
add_subdirectory(src)
