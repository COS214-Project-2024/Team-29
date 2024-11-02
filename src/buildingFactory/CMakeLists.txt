#Gather source and header files for current module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define current module as a library
add_library(buildingFactory ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(buildingFactory PUBLIC ${CMAKE_SOURCE_DIR}/src)