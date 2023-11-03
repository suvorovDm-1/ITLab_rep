cmake_minimum_required(VERSION 3.25)

set(current_project "calc_proj")
project(${current_project})

include_directories(modules)

add_subdirectory(samples)
add_subdirectory(modules)

# add_executable(${current_project} calc.cpp)