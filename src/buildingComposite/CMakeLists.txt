#Gather source and header files for current module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define current module as a library
add_library(buildingComposite ${Sources} ${Headers})

# Add dependency for this module
set(DIRECTORIES
    commercial
    industrial
    landmark
    residential
)

# Add each directory as a subdirectory
foreach(DIR ${DIRECTORIES})
    add_subdirectory(${DIR})
endforeach()

# Link modules to current module
target_link_libraries(buildingComposite commercial industrial landmark residential)

# Add src as an include directory for this module
target_include_directories(buildingComposite PUBLIC $(CMAKE_SOURCE_DIR)/src)