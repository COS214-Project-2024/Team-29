#Gather source and header files for the government module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define the government module as a library
add_library(government ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(government PUBLIC $(CMAKE_SOURCE_DIR)/src)