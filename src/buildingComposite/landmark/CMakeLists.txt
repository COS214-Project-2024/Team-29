#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Define current module as a library
add_library(landmarkLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(landmarkLib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/.. # Include the parent directory
)

# Link to dependencies (if any)
target_link_libraries(landmarkLib PUBLIC
    buildingCompositeLib
)