# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.20)

# Set variable for project name
set(THIS ExampleTests)

# Describe what will be built for tests, dont need headers for tests
set(Sources
    ExampleTests.cpp
)

# Make program itself not linking
add_executable(${THIS} ${Sources})

# Things you depend on, PUBLIC means that the things you depend on will be linked to the things that depend on it
target_link_libraries(${THIS} PUBLIC
    gtest_main # Google test will provide main program.
    Example # Link with your own program
)

# Add test
add_test(
    NAME ${THIS}
    COMMAND ${THIS}
)