#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Define the transport module as a library
add_library(transportLib ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(transportLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})