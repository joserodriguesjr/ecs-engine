# Set the CPM_SOURCE_CACHE path
set(CPM_SOURCE_CACHE "/tmp/deps" CACHE STRING "Location to cache dependencies" FORCE)

cmake_minimum_required(VERSION 3.19)

project(MyGameProject)

# add_definitions(-DDESKTOP)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the games/flappy subdirectory
add_subdirectory(games/flappy)
