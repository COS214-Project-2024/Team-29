#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Compile the sources into a library
add_library(commercialLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(commercialLib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/..  # Include parent directory
)

# Link to dependencies (if any)
target_link_libraries(commercialLib PUBLIC
    buildingCompositeLib
)