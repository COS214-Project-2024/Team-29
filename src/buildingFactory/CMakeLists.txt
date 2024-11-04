#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Define current module as a library
add_library(buildingFactoryLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(buildingFactoryLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link the library with the commonLib library
target_link_libraries(buildingFactoryLib PUBLIC 
    buildingCompositeLib
)