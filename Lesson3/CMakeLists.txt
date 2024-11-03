# All CMake project has to start with this two lines
cmake_minimum_required(VERSION 3.20) # Min version of the CMake required
project(Lesson3 VERSION 1.0) # Name of the project and version

set(CMAKE_CXX_STANDARD 17) # Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD_REQUIRED True) # This tells the CMake that the standard must be available

# Add the executable in the bin directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) # Set the output directory of the executable
# Add the library in the lib directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) # Set the output directory of the library

add_subdirectory(src) # Add the src directory to the build