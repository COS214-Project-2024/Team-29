#Gather source and header files for the satisfaction module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define the satisfaction module as a library
add_library(satisfaction ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(satisfaction PUBLIC $(CMAKE_SOURCE_DIR)/src)