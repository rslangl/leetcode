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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rune/projects/leetcode/median-sorted-arrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rune/projects/leetcode/median-sorted-arrays/build

# Include any dependencies generated for this target.
include CMakeFiles/median-sorted-arrays_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/median-sorted-arrays_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/median-sorted-arrays_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/median-sorted-arrays_test.dir/flags.make

CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o: CMakeFiles/median-sorted-arrays_test.dir/flags.make
CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o: /home/rune/projects/leetcode/median-sorted-arrays/src/median-sorted-arrays_test.cpp
CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o: CMakeFiles/median-sorted-arrays_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/rune/projects/leetcode/median-sorted-arrays/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o -MF CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o.d -o CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o -c /home/rune/projects/leetcode/median-sorted-arrays/src/median-sorted-arrays_test.cpp

CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rune/projects/leetcode/median-sorted-arrays/src/median-sorted-arrays_test.cpp > CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.i

CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rune/projects/leetcode/median-sorted-arrays/src/median-sorted-arrays_test.cpp -o CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.s

# Object files for target median-sorted-arrays_test
median__sorted__arrays_test_OBJECTS = \
"CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o"

# External object files for target median-sorted-arrays_test
median__sorted__arrays_test_EXTERNAL_OBJECTS = \
"/home/rune/projects/leetcode/median-sorted-arrays/build/CMakeFiles/median-sorted-arrays_lib.dir/src/solution.cpp.o"

median-sorted-arrays_test: CMakeFiles/median-sorted-arrays_test.dir/src/median-sorted-arrays_test.cpp.o
median-sorted-arrays_test: CMakeFiles/median-sorted-arrays_lib.dir/src/solution.cpp.o
median-sorted-arrays_test: CMakeFiles/median-sorted-arrays_test.dir/build.make
median-sorted-arrays_test: /usr/lib/libCatch2WithMain.a
median-sorted-arrays_test: CMakeFiles/median-sorted-arrays_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/rune/projects/leetcode/median-sorted-arrays/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable median-sorted-arrays_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/median-sorted-arrays_test.dir/link.txt --verbose=$(VERBOSE)
	/usr/local/bin/cmake -D TEST_TARGET=median-sorted-arrays_test -D TEST_EXECUTABLE=/home/rune/projects/leetcode/median-sorted-arrays/build/median-sorted-arrays_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/rune/projects/leetcode/median-sorted-arrays/build -D TEST_SPEC= -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_LIST=median-sorted-arrays_test_TESTS -D TEST_REPORTER= -D TEST_OUTPUT_DIR= -D TEST_OUTPUT_PREFIX= -D TEST_OUTPUT_SUFFIX= -D CTEST_FILE=/home/rune/projects/leetcode/median-sorted-arrays/build/median-sorted-arrays_test_tests-b12d07c.cmake -P /usr/lib/cmake/Catch2/CatchAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/median-sorted-arrays_test.dir/build: median-sorted-arrays_test
.PHONY : CMakeFiles/median-sorted-arrays_test.dir/build

CMakeFiles/median-sorted-arrays_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/median-sorted-arrays_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/median-sorted-arrays_test.dir/clean

CMakeFiles/median-sorted-arrays_test.dir/depend:
	cd /home/rune/projects/leetcode/median-sorted-arrays/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rune/projects/leetcode/median-sorted-arrays /home/rune/projects/leetcode/median-sorted-arrays /home/rune/projects/leetcode/median-sorted-arrays/build /home/rune/projects/leetcode/median-sorted-arrays/build /home/rune/projects/leetcode/median-sorted-arrays/build/CMakeFiles/median-sorted-arrays_test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/median-sorted-arrays_test.dir/depend
