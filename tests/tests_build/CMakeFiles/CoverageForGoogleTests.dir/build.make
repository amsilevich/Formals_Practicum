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
CMAKE_SOURCE_DIR = "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_build"

# Include any dependencies generated for this target.
include CMakeFiles/CoverageForGoogleTests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CoverageForGoogleTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CoverageForGoogleTests.dir/flags.make

CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.o: CMakeFiles/CoverageForGoogleTests.dir/flags.make
CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.o: ../tests_run.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.o -c "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_run.cpp"

CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_run.cpp" > CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.i

CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_run.cpp" -o CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.s

# Object files for target CoverageForGoogleTests
CoverageForGoogleTests_OBJECTS = \
"CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.o"

# External object files for target CoverageForGoogleTests
CoverageForGoogleTests_EXTERNAL_OBJECTS =

CoverageForGoogleTests: CMakeFiles/CoverageForGoogleTests.dir/tests_run.cpp.o
CoverageForGoogleTests: CMakeFiles/CoverageForGoogleTests.dir/build.make
CoverageForGoogleTests: CMakeFiles/CoverageForGoogleTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CoverageForGoogleTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CoverageForGoogleTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CoverageForGoogleTests.dir/build: CoverageForGoogleTests

.PHONY : CMakeFiles/CoverageForGoogleTests.dir/build

CMakeFiles/CoverageForGoogleTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CoverageForGoogleTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CoverageForGoogleTests.dir/clean

CMakeFiles/CoverageForGoogleTests.dir/depend:
	cd "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests" "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests" "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_build" "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_build" "/home/artem/Рабочий стол/ФОРМАЛКИ/Practicum_1/tests/tests_build/CMakeFiles/CoverageForGoogleTests.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CoverageForGoogleTests.dir/depend

