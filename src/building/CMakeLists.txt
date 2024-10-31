#Gather source and header files for the building module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define the building module as a library
add_library(building ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(building PUBLIC $(CMAKE_SOURCE_DIR)/src)