#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Define the visitor module as a library
add_library(visitorLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(visitorLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link visitor to other libraries
target_link_libraries(visitorLib 
    buildingCompositeLib
)