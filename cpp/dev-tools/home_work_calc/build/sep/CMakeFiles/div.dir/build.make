# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mushex/mobile2/c++/cpp/home_work_calc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mushex/mobile2/c++/cpp/home_work_calc/build

# Include any dependencies generated for this target.
include sep/CMakeFiles/div.dir/depend.make

# Include the progress variables for this target.
include sep/CMakeFiles/div.dir/progress.make

# Include the compile flags for this target's objects.
include sep/CMakeFiles/div.dir/flags.make

sep/CMakeFiles/div.dir/src/sep.cpp.o: sep/CMakeFiles/div.dir/flags.make
sep/CMakeFiles/div.dir/src/sep.cpp.o: ../sep/src/sep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mushex/mobile2/c++/cpp/home_work_calc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sep/CMakeFiles/div.dir/src/sep.cpp.o"
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sep && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/div.dir/src/sep.cpp.o -c /home/mushex/mobile2/c++/cpp/home_work_calc/sep/src/sep.cpp

sep/CMakeFiles/div.dir/src/sep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/div.dir/src/sep.cpp.i"
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sep && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mushex/mobile2/c++/cpp/home_work_calc/sep/src/sep.cpp > CMakeFiles/div.dir/src/sep.cpp.i

sep/CMakeFiles/div.dir/src/sep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/div.dir/src/sep.cpp.s"
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sep && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mushex/mobile2/c++/cpp/home_work_calc/sep/src/sep.cpp -o CMakeFiles/div.dir/src/sep.cpp.s

# Object files for target div
div_OBJECTS = \
"CMakeFiles/div.dir/src/sep.cpp.o"

# External object files for target div
div_EXTERNAL_OBJECTS =

sep/libdiv.so: sep/CMakeFiles/div.dir/src/sep.cpp.o
sep/libdiv.so: sep/CMakeFiles/div.dir/build.make
sep/libdiv.so: sep/CMakeFiles/div.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mushex/mobile2/c++/cpp/home_work_calc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libdiv.so"
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sep && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/div.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sep/CMakeFiles/div.dir/build: sep/libdiv.so

.PHONY : sep/CMakeFiles/div.dir/build

sep/CMakeFiles/div.dir/clean:
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sep && $(CMAKE_COMMAND) -P CMakeFiles/div.dir/cmake_clean.cmake
.PHONY : sep/CMakeFiles/div.dir/clean

sep/CMakeFiles/div.dir/depend:
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mushex/mobile2/c++/cpp/home_work_calc /home/mushex/mobile2/c++/cpp/home_work_calc/sep /home/mushex/mobile2/c++/cpp/home_work_calc/build /home/mushex/mobile2/c++/cpp/home_work_calc/build/sep /home/mushex/mobile2/c++/cpp/home_work_calc/build/sep/CMakeFiles/div.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sep/CMakeFiles/div.dir/depend

