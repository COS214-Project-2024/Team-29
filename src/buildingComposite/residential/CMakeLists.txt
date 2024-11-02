#Include the current directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#Gather source and header files for current module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define current module as a library
add_library(residential ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(residential PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})