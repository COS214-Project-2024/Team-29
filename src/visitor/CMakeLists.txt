#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Define the visitor module as a library
add_library(visitorLib ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(visitorLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})