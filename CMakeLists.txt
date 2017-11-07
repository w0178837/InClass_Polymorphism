cmake_minimum_required(VERSION 3.8)
project(InClass_Polymorphism)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Boat.cpp Boat.h Bicycle.cpp Bicycle.h Vehicle.cpp Vehicle.h)
add_executable(InClass_Polymorphism ${SOURCE_FILES})