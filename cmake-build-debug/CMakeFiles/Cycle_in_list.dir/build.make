# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/107/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/107/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/artemiy/CLionProjects/Cycle_in_list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/artemiy/CLionProjects/Cycle_in_list/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cycle_in_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cycle_in_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cycle_in_list.dir/flags.make

CMakeFiles/Cycle_in_list.dir/main.c.o: CMakeFiles/Cycle_in_list.dir/flags.make
CMakeFiles/Cycle_in_list.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/artemiy/CLionProjects/Cycle_in_list/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Cycle_in_list.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Cycle_in_list.dir/main.c.o   -c /home/artemiy/CLionProjects/Cycle_in_list/main.c

CMakeFiles/Cycle_in_list.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Cycle_in_list.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/artemiy/CLionProjects/Cycle_in_list/main.c > CMakeFiles/Cycle_in_list.dir/main.c.i

CMakeFiles/Cycle_in_list.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Cycle_in_list.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/artemiy/CLionProjects/Cycle_in_list/main.c -o CMakeFiles/Cycle_in_list.dir/main.c.s

# Object files for target Cycle_in_list
Cycle_in_list_OBJECTS = \
"CMakeFiles/Cycle_in_list.dir/main.c.o"

# External object files for target Cycle_in_list
Cycle_in_list_EXTERNAL_OBJECTS =

Cycle_in_list: CMakeFiles/Cycle_in_list.dir/main.c.o
Cycle_in_list: CMakeFiles/Cycle_in_list.dir/build.make
Cycle_in_list: CMakeFiles/Cycle_in_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/artemiy/CLionProjects/Cycle_in_list/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Cycle_in_list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cycle_in_list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cycle_in_list.dir/build: Cycle_in_list

.PHONY : CMakeFiles/Cycle_in_list.dir/build

CMakeFiles/Cycle_in_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cycle_in_list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cycle_in_list.dir/clean

CMakeFiles/Cycle_in_list.dir/depend:
	cd /home/artemiy/CLionProjects/Cycle_in_list/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/artemiy/CLionProjects/Cycle_in_list /home/artemiy/CLionProjects/Cycle_in_list /home/artemiy/CLionProjects/Cycle_in_list/cmake-build-debug /home/artemiy/CLionProjects/Cycle_in_list/cmake-build-debug /home/artemiy/CLionProjects/Cycle_in_list/cmake-build-debug/CMakeFiles/Cycle_in_list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cycle_in_list.dir/depend

