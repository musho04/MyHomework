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
include sum/CMakeFiles/sum.dir/depend.make

# Include the progress variables for this target.
include sum/CMakeFiles/sum.dir/progress.make

# Include the compile flags for this target's objects.
include sum/CMakeFiles/sum.dir/flags.make

sum/CMakeFiles/sum.dir/src/sum.cpp.o: sum/CMakeFiles/sum.dir/flags.make
sum/CMakeFiles/sum.dir/src/sum.cpp.o: ../sum/src/sum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mushex/mobile2/c++/cpp/home_work_calc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sum/CMakeFiles/sum.dir/src/sum.cpp.o"
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sum && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sum.dir/src/sum.cpp.o -c /home/mushex/mobile2/c++/cpp/home_work_calc/sum/src/sum.cpp

sum/CMakeFiles/sum.dir/src/sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sum.dir/src/sum.cpp.i"
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sum && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mushex/mobile2/c++/cpp/home_work_calc/sum/src/sum.cpp > CMakeFiles/sum.dir/src/sum.cpp.i

sum/CMakeFiles/sum.dir/src/sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sum.dir/src/sum.cpp.s"
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sum && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mushex/mobile2/c++/cpp/home_work_calc/sum/src/sum.cpp -o CMakeFiles/sum.dir/src/sum.cpp.s

# Object files for target sum
sum_OBJECTS = \
"CMakeFiles/sum.dir/src/sum.cpp.o"

# External object files for target sum
sum_EXTERNAL_OBJECTS =

sum/libsum.so: sum/CMakeFiles/sum.dir/src/sum.cpp.o
sum/libsum.so: sum/CMakeFiles/sum.dir/build.make
sum/libsum.so: sum/CMakeFiles/sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mushex/mobile2/c++/cpp/home_work_calc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libsum.so"
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sum && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sum/CMakeFiles/sum.dir/build: sum/libsum.so

.PHONY : sum/CMakeFiles/sum.dir/build

sum/CMakeFiles/sum.dir/clean:
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build/sum && $(CMAKE_COMMAND) -P CMakeFiles/sum.dir/cmake_clean.cmake
.PHONY : sum/CMakeFiles/sum.dir/clean

sum/CMakeFiles/sum.dir/depend:
	cd /home/mushex/mobile2/c++/cpp/home_work_calc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mushex/mobile2/c++/cpp/home_work_calc /home/mushex/mobile2/c++/cpp/home_work_calc/sum /home/mushex/mobile2/c++/cpp/home_work_calc/build /home/mushex/mobile2/c++/cpp/home_work_calc/build/sum /home/mushex/mobile2/c++/cpp/home_work_calc/build/sum/CMakeFiles/sum.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sum/CMakeFiles/sum.dir/depend

