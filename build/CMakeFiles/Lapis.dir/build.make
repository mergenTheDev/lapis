# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/berkay/Desktop/lapis

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/berkay/Desktop/lapis/build

# Include any dependencies generated for this target.
include CMakeFiles/Lapis.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Lapis.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Lapis.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lapis.dir/flags.make

CMakeFiles/Lapis.dir/src/main.cpp.o: CMakeFiles/Lapis.dir/flags.make
CMakeFiles/Lapis.dir/src/main.cpp.o: /home/berkay/Desktop/lapis/src/main.cpp
CMakeFiles/Lapis.dir/src/main.cpp.o: CMakeFiles/Lapis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/berkay/Desktop/lapis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lapis.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Lapis.dir/src/main.cpp.o -MF CMakeFiles/Lapis.dir/src/main.cpp.o.d -o CMakeFiles/Lapis.dir/src/main.cpp.o -c /home/berkay/Desktop/lapis/src/main.cpp

CMakeFiles/Lapis.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Lapis.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/berkay/Desktop/lapis/src/main.cpp > CMakeFiles/Lapis.dir/src/main.cpp.i

CMakeFiles/Lapis.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Lapis.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/berkay/Desktop/lapis/src/main.cpp -o CMakeFiles/Lapis.dir/src/main.cpp.s

# Object files for target Lapis
Lapis_OBJECTS = \
"CMakeFiles/Lapis.dir/src/main.cpp.o"

# External object files for target Lapis
Lapis_EXTERNAL_OBJECTS =

Lapis: CMakeFiles/Lapis.dir/src/main.cpp.o
Lapis: CMakeFiles/Lapis.dir/build.make
Lapis: CMakeFiles/Lapis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/berkay/Desktop/lapis/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lapis"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lapis.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lapis.dir/build: Lapis
.PHONY : CMakeFiles/Lapis.dir/build

CMakeFiles/Lapis.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lapis.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lapis.dir/clean

CMakeFiles/Lapis.dir/depend:
	cd /home/berkay/Desktop/lapis/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/berkay/Desktop/lapis /home/berkay/Desktop/lapis /home/berkay/Desktop/lapis/build /home/berkay/Desktop/lapis/build /home/berkay/Desktop/lapis/build/CMakeFiles/Lapis.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Lapis.dir/depend

