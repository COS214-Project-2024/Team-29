# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.20)

# Set variable for project name
set(PROJECT_NAME TheCityKings)

# Set the project name
project(${PROJECT_NAME} C CXX)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

# Declare and fetch GoogleTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

# Nice to have, libraries that will be linked together
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Tells CMake we will have unit tests / googletest
enable_testing()

# Add dependency for project
set(DIRECTORIES
    src/buildingComposite
    src/buildingFactory
    src/command
    src/government
    src/managers
    src/satisfaction
    src/transport
    src/utility
    src/visitor
)

# Add each directory as a subdirectory
foreach(DIR ${DIRECTORIES})
    add_subdirectory(${DIR})
endforeach()

# Define main executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Link modules to main executable
target_link_libraries(${PROJECT_NAME} buildingComposite buildingFactory command government managers satisfaction transport utility visitor)

# Keep code seperate from tests
add_subdirectory(test)