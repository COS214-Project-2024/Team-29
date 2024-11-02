# Include current directory as an include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Define current module as a library
add_library(buildingFactory ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(buildingFactory PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link against buildingComposite if there's a dependency
# target_link_libraries(buildingFactory PUBLIC buildingComposite)