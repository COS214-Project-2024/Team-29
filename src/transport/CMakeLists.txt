#Gather source and header files for the transport module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define the transport module as a library
add_library(transport ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(transport PUBLIC $(CMAKE_SOURCE_DIR)/src)