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





#############################################
# Unit tests

# Add an library for the example classes
add_library(example_google_test 
    square.cpp
)

add_subdirectory(3rd_party/google-test)

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(unit_tests unit_tests/unit_tests.cpp)

target_link_libraries(unit_tests
    example_google_test
    GTest::GTest 
    GTest::Main
)

add_test(test_all unit_tests)
