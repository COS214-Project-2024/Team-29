# Set variable
set(THIS BuildingCompositeTest)
set(SOURCES BuildingCompositeTest.cpp)

# Define test executable for test module
add_executable(${THIS} ${SOURCES})

# Link necessary libraries and GoogleTest
target_link_libraries(${THIS} PRIVATE 
    gtest_main 
    buildingComposite         # Current test module
)

# Include necessary directories
target_include_directories(${THIS} PRIVATE 
    ${PROJECT_SOURCE_DIR}/src
)

# Register the test
add_test(
    NAME ${THIS} 
    COMMAND ${THIS}
)