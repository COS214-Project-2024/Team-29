# Fetch GoogleTest (only done once here to avoid duplication)
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

# Set variable
set(DIRECTORIES
    buildingComposite
    visitor
)

# Add each directory as a subdirectory
foreach(DIR ${DIRECTORIES})
    add_subdirectory(${DIR})
endforeach()