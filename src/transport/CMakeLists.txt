# Include current directory as an include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Define the transport module as a library
add_library(transport ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(transport PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})