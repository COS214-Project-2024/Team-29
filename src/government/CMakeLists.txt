# Include current directory as an include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Define the government module as a library
add_library(government ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(government PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})