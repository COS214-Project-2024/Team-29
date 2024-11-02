#include current directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#Gather source and header files for current module
file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

# Make a list of directories to add as subdirectories
set(DIRECTORIES
    commercial
    industrial
    landmark
    residential
)

# Add subdirectories for each module
foreach(DIR ${DIRECTORIES})
    add_subdirectory(${DIR})
endforeach()

# Create a library from current module
add_library(buildingComposite ${SOURCES} ${HEADERS})

# Add src as an include directory for this module
target_include_directories(buildingComposite PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link modules to current module
target_link_libraries(buildingComposite PUBLIC ${DIRECTORIES})