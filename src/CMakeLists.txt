# Set minimum version of CMake
cmake_minimum_required(VERSION 3.20)

# Set variable for project name
set(PROJECT_NAME TheCityKings)

# Add subdirectories for modules
add_subdirectory(buildingComposite)
add_subdirectory(buildingFactory)
add_subdirectory(government)
add_subdirectory(managers)
add_subdirectory(memento)
add_subdirectory(satisfaction)
add_subdirectory(transport)
add_subdirectory(utility)
add_subdirectory(visitor)

# Add the main executable
add_executable(${PROJECT_NAME} main.cpp)

# Link libraries created from all the subdirectories
target_link_libraries(${PROJECT_NAME} 
    managersLib
)