cmake_minimum_required(VERSION 3.7)
project(Animals)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Animal.cpp Animal.h Pack.cpp Pack.h Cat.cpp Cat.h Dog.cpp Dog.h Cow.cpp Cow.h)
add_executable(Animals ${SOURCE_FILES})