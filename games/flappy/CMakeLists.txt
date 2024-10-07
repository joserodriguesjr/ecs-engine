cmake_minimum_required(VERSION 3.19)

project(flappy)

# Add the engine library
add_subdirectory(${CMAKE_SOURCE_DIR}/engine engine_build)

# Add the game source files
file(GLOB_RECURSE FLAPPY_SOURCES CONFIGURE_DEPENDS main.cpp src/*.cpp include/*.hpp)

add_executable(flappy ${FLAPPY_SOURCES})

# Link the engine library to the flappy game
target_link_libraries(flappy PRIVATE engine)

# Include directories for the game headers
target_include_directories(flappy PRIVATE include ../../engine)