#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Define the utility module as a library
add_library(utilityLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(utilityLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Does not need to link to any other libraries