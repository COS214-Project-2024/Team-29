#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Define the government module as a library
add_library(governmentLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(governmentLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link the government module with the city module
target_link_libraries(governmentLib PUBLIC
    buildingFactoryLib
)