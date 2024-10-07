cmake_minimum_required(VERSION 3.19)

project(engine)

include(../_cmake/CPM.cmake)
CPMAddPackage("gh:raysan5/raylib#5.0")

# Add all source files from the engine folder
file(GLOB_RECURSE ENGINE_SOURCES CONFIGURE_DEPENDS 
    core/*.cpp 
    component/*.cpp 
    entity/*.cpp 
    resource/*.cpp 
    interface/*.cpp 
    system/*.cpp 
)

add_library(engine STATIC ${ENGINE_SOURCES})

# Include directories for the engine headers
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link Raylib to the engine library
target_link_libraries(engine PUBLIC raylib)
