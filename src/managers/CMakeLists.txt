#Gather source and header files for the managers module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define the government module as a library
add_library(managers ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(managers PUBLIC $(CMAKE_SOURCE_DIR)/src)