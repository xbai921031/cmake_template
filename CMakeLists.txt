cmake_minimum_required(VERSION 3.10)

# Project name
project(cmake_template)

# C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include header files
include_directories(src)
include_directories(src/add)
include_directories(src/sub)

# Add source files
add_subdirectory(src)
add_subdirectory(src/add)
add_subdirectory(src/sub)

# Search src
file(GLOB_RECURSE SOURCES "src/*.c")

# Executable file
add_executable(cmake_template ${SOURCES})
target_link_libraries(cmake_template main add sub)

# Build options
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wpedantic -g")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0 -DDEBUG")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O3")
