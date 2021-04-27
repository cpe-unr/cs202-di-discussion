cmake_minimum_required(VERSION 3.16)
project(DI_class)

set(CMAKE_CXX_STANDARD 14)

add_executable(DI_class main.cpp Processor.cpp Processor.h FileManager.cpp FileManager.h Algorithm.cpp Algorithm.h Buffer.cpp Buffer.h)