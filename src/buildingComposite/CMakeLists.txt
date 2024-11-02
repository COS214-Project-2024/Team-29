# Add all subdirectories
add_subdirectory(commercial)
add_subdirectory(industrial)
add_subdirectory(landmark)
add_subdirectory(residential)

# Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Create a library from current module
add_library(buildingCompositeLib ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(buildingCompositeLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})