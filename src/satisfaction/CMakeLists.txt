#Gather source and header files for current module
file(GLOB SOURCES *.cpp)

# Define the satisfaction module as a library
add_library(satisfactionLib ${SOURCES})

# Add src as an include directory for this module
target_include_directories(satisfactionLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link the satisfaction module with other modules
target_link_libraries(satisfactionLib PUBLIC 
    managersLib
)