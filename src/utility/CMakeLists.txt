#Gather source and header files for the utility module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define the utility module as a library
add_library(utility ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(utility PUBLIC ${CMAKE_SOURCE_DIR}/src)