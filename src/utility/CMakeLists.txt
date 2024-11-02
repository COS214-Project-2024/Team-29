#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Define the utility module as a library
add_library(utilityLib ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(utilityLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})