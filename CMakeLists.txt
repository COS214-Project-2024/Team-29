# Set the minimum version of CMake that can be used
cmake_mimimum_required(VERSION 3.20)

# Set variable for project name
set(PROJECT_NAME TheCityKings)

# Set the project name
project(${PROJECT_NAME} C CXX)

# Set the C and C++ stadard to C++ 17
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

# Nice to have, libraries that will be linked together
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Tells CMake we will have unit tests / googletest
enable_testing()

# Add dependency for project
set(DIRECTORIES
    src/building
    src/command
    src/Satisfaction
    src/transportation
    src/utility
    src/government
    src/managers
    googletest
)

# Add each directory as a subdirectory
foreach(DIR ${DIRECTORIES})
    add_subdirectory(${DIR})
endforeach()

# Define main executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Link modules to main executable
target_link_libraries(${PROJECT_NAME} building command government managers satisfaction transport utility)

# Make code use add executable or add library
add_library(${PROJECT_NAME} STATIC ${Headers} ${Sources}) 

# Keep code seperate from tests
add_subdirectory(tests)