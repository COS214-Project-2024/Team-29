#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Define the transport module as a library
add_library(transportLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(transportLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Does not require any other libraries