cmake_minimum_required(VERSION 3.14)
project(check_cred_project)
 
# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add your factorial program
# add_executable(check_cred_prog check_cred.cpp)

# Include GoogleTest using FetchContent
include(FetchContent)
FetchContent_Declare(
    googletest
URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

# Create a test binary
add_executable(check_cred_test test/check_cred_test.cpp)
target_link_libraries(check_cred_test GTest::gtest_main)

# Enable testing
enable_testing()
gtest_discover_tests(check_cred_test)


