cmake_minimum_required(VERSION 3.20)
project(Quiz)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS -static)

add_subdirectory(Italian)

add_executable(Quiz main.cpp Question.cpp Question.h)
