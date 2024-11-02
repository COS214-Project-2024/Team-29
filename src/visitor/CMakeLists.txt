#Gather source and header files for the vistor module
file(GLOB Sources *.cpp)
file(GLOB Headers *.h)

# Define the visitor module as a library
add_library(visitor ${Sources} ${Headers})

# Add src as an include directory for this module
target_include_directories(visitor PUBLIC ${CMAKE_SOURCE_DIR}/src)