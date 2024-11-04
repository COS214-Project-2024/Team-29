#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Define the government module as a library
add_library(mementoLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(mementoLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link the library with the other libraries
target_link_libraries(mementoLib PUBLIC
    buildingCompositeLib
    governmentLib
    satisfactionLib
    transportLib
    utilityLib
    managers
)