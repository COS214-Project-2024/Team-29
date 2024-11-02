# Include current directory as an include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Define the satisfaction module as a library
add_library(satisfaction ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(satisfaction PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})