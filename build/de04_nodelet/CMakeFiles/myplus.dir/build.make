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
CMAKE_SOURCE_DIR = /home/yang/de06/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yang/de06/build

# Include any dependencies generated for this target.
include de04_nodelet/CMakeFiles/myplus.dir/depend.make

# Include the progress variables for this target.
include de04_nodelet/CMakeFiles/myplus.dir/progress.make

# Include the compile flags for this target's objects.
include de04_nodelet/CMakeFiles/myplus.dir/flags.make

de04_nodelet/CMakeFiles/myplus.dir/src/myplus.cpp.o: de04_nodelet/CMakeFiles/myplus.dir/flags.make
de04_nodelet/CMakeFiles/myplus.dir/src/myplus.cpp.o: /home/yang/de06/src/de04_nodelet/src/myplus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yang/de06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object de04_nodelet/CMakeFiles/myplus.dir/src/myplus.cpp.o"
	cd /home/yang/de06/build/de04_nodelet && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myplus.dir/src/myplus.cpp.o -c /home/yang/de06/src/de04_nodelet/src/myplus.cpp

de04_nodelet/CMakeFiles/myplus.dir/src/myplus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myplus.dir/src/myplus.cpp.i"
	cd /home/yang/de06/build/de04_nodelet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yang/de06/src/de04_nodelet/src/myplus.cpp > CMakeFiles/myplus.dir/src/myplus.cpp.i

de04_nodelet/CMakeFiles/myplus.dir/src/myplus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myplus.dir/src/myplus.cpp.s"
	cd /home/yang/de06/build/de04_nodelet && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yang/de06/src/de04_nodelet/src/myplus.cpp -o CMakeFiles/myplus.dir/src/myplus.cpp.s

# Object files for target myplus
myplus_OBJECTS = \
"CMakeFiles/myplus.dir/src/myplus.cpp.o"

# External object files for target myplus
myplus_EXTERNAL_OBJECTS =

/home/yang/de06/devel/lib/libmyplus.so: de04_nodelet/CMakeFiles/myplus.dir/src/myplus.cpp.o
/home/yang/de06/devel/lib/libmyplus.so: de04_nodelet/CMakeFiles/myplus.dir/build.make
/home/yang/de06/devel/lib/libmyplus.so: de04_nodelet/CMakeFiles/myplus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yang/de06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/yang/de06/devel/lib/libmyplus.so"
	cd /home/yang/de06/build/de04_nodelet && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myplus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
de04_nodelet/CMakeFiles/myplus.dir/build: /home/yang/de06/devel/lib/libmyplus.so

.PHONY : de04_nodelet/CMakeFiles/myplus.dir/build

de04_nodelet/CMakeFiles/myplus.dir/clean:
	cd /home/yang/de06/build/de04_nodelet && $(CMAKE_COMMAND) -P CMakeFiles/myplus.dir/cmake_clean.cmake
.PHONY : de04_nodelet/CMakeFiles/myplus.dir/clean

de04_nodelet/CMakeFiles/myplus.dir/depend:
	cd /home/yang/de06/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yang/de06/src /home/yang/de06/src/de04_nodelet /home/yang/de06/build /home/yang/de06/build/de04_nodelet /home/yang/de06/build/de04_nodelet/CMakeFiles/myplus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : de04_nodelet/CMakeFiles/myplus.dir/depend
