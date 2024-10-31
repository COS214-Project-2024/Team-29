#Gather source and header files for the command module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define the command module as a library
add_library(command ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(command PUBLIC $(CMAKE_SOURCE_DIR)/src)