cmake_minimum_required(VERSION 3.6)
project(rot_13)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        rot_13.c)

add_executable(rot_13 ${SOURCE_FILES})