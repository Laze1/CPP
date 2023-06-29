cmake_minimum_required(VERSION 3.24)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPP main.cpp Log/Log.cpp Log/Log.h test/refAndPtr.cpp test/refAndPtr.h)
