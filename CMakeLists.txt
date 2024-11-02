# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.20)

# Set variable for project name
set(PROJECT_NAME TheCityKings)

# Set the project name
project(${PROJECT_NAME} C CXX)

# Specify the C and C++ standards
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Nice to have, libraries that will be linked together, shared libraries
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Option to enable/disable testing
option(ENABLE_TESTS "Build test for the project" OFF)

# Add src directory
add_subdirectory(src)

# Add test directory only if ENABLE_TESTS is ON
if(ENABLE_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()