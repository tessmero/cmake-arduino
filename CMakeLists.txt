# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (cmake-arduino)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    square.cpp
    main_cpp/main.cpp
)

# Add an executable with the above sources
add_executable(cmake-arduino ${SOURCES})

