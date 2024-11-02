# Include the current directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Add subdirectories for modules
set(DIRECTORIES 
    buildingComposite
    buildingFactory
    government
    managers
    satisfaction
    transport
    utility
    visitor 
)

# Add each directory as a subdirectory
foreach(DIR ${DIRECTORIES})
    add_subdirectory(${DIR})
endforeach()

# Create the executable
add_executable(TheCityKings main.cpp)

# Link module libraries to the executable
target_link_libraries(TheCityKings PUBLIC ${DIRECTORIES})