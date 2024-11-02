# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.20)

# Set variable for project name
set(THIS ExampleTests)

# Declare and fetch GoogleTest within the test CMake file
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

# Describe what will be built for tests, dont need headers for tests
set(Sources
    ExampleTests.cpp
)

# Make program itself not linking
add_executable(${THIS} ${Sources})

# Link GTest and necessary libraries to the test executable
target_link_libraries(${THIS} PUBLIC
    gtest_main      # Google test will provide main program.
    buildingComposite buildingFactory government managers satisfaction transport utility visitor    # Link to the main program
)

# Add test
add_test(
    NAME ${THIS}
    COMMAND ${THIS}
)