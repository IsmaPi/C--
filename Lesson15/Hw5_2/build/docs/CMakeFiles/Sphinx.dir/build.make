# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ismapi/miniconda3/envs/cppdev/bin/cmake

# The command to remove a file.
RM = /home/ismapi/miniconda3/envs/cppdev/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ismapi/Desktop/C++/Lesson15/Hw5_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build

# Utility rule file for Sphinx.

# Include any custom commands dependencies for this target.
include docs/CMakeFiles/Sphinx.dir/compiler_depend.make

# Include the progress variables for this target.
include docs/CMakeFiles/Sphinx.dir/progress.make

docs/CMakeFiles/Sphinx: docs/doxygen/xml/index.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating documentation with Sphinx"
	cd /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/docs && /home/ismapi/miniconda3/envs/cppdev/bin/cmake -E env AUTHOR_NAME= PROJECT_NAME=MyVeryCoolProject sphinx-build -b html -D breathe_projects.MyVeryCoolProject=/home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/docs/doxygen/xml /home/ismapi/Desktop/C++/Lesson15/Hw5_2/docs/source /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/docs/sphinx

docs/doxygen/xml/index.xml: /home/ismapi/Desktop/C++/Lesson15/Hw5_2/docs/Doxyfile.in
docs/doxygen/xml/index.xml: /home/ismapi/Desktop/C++/Lesson15/Hw5_2/src/transform.h
docs/doxygen/xml/index.xml: /home/ismapi/Desktop/C++/Lesson15/Hw5_2/docs/Doxyfile.in
docs/doxygen/xml/index.xml: /home/ismapi/Desktop/C++/Lesson15/Hw5_2/docs/CMakeLists.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating docs"
	cd /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/docs && /home/ismapi/miniconda3/envs/cppdev/bin/doxygen /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/docs/Doxyfile

Sphinx: docs/CMakeFiles/Sphinx
Sphinx: docs/doxygen/xml/index.xml
Sphinx: docs/CMakeFiles/Sphinx.dir/build.make
.PHONY : Sphinx

# Rule to build all files generated by this target.
docs/CMakeFiles/Sphinx.dir/build: Sphinx
.PHONY : docs/CMakeFiles/Sphinx.dir/build

docs/CMakeFiles/Sphinx.dir/clean:
	cd /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/docs && $(CMAKE_COMMAND) -P CMakeFiles/Sphinx.dir/cmake_clean.cmake
.PHONY : docs/CMakeFiles/Sphinx.dir/clean

docs/CMakeFiles/Sphinx.dir/depend:
	cd /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ismapi/Desktop/C++/Lesson15/Hw5_2 /home/ismapi/Desktop/C++/Lesson15/Hw5_2/docs /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/docs /home/ismapi/Desktop/C++/Lesson15/Hw5_2/build/docs/CMakeFiles/Sphinx.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : docs/CMakeFiles/Sphinx.dir/depend

