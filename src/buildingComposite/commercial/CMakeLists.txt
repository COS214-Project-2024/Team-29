#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Compile the sources into a library
add_library(commercialLib ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(commercialLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})