# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\thein\Desktop\dsa-gfg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\thein\Desktop\dsa-gfg\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dsa_gfg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dsa_gfg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dsa_gfg.dir/flags.make

CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.obj: CMakeFiles/dsa_gfg.dir/flags.make
CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.obj: ../Trees/1_tree_traversal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\thein\Desktop\dsa-gfg\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dsa_gfg.dir\Trees\1_tree_traversal.cpp.obj -c C:\Users\thein\Desktop\dsa-gfg\Trees\1_tree_traversal.cpp

CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\thein\Desktop\dsa-gfg\Trees\1_tree_traversal.cpp > CMakeFiles\dsa_gfg.dir\Trees\1_tree_traversal.cpp.i

CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\thein\Desktop\dsa-gfg\Trees\1_tree_traversal.cpp -o CMakeFiles\dsa_gfg.dir\Trees\1_tree_traversal.cpp.s

# Object files for target dsa_gfg
dsa_gfg_OBJECTS = \
"CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.obj"

# External object files for target dsa_gfg
dsa_gfg_EXTERNAL_OBJECTS =

dsa_gfg.exe: CMakeFiles/dsa_gfg.dir/Trees/1_tree_traversal.cpp.obj
dsa_gfg.exe: CMakeFiles/dsa_gfg.dir/build.make
dsa_gfg.exe: CMakeFiles/dsa_gfg.dir/linklibs.rsp
dsa_gfg.exe: CMakeFiles/dsa_gfg.dir/objects1.rsp
dsa_gfg.exe: CMakeFiles/dsa_gfg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\thein\Desktop\dsa-gfg\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dsa_gfg.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dsa_gfg.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dsa_gfg.dir/build: dsa_gfg.exe

.PHONY : CMakeFiles/dsa_gfg.dir/build

CMakeFiles/dsa_gfg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dsa_gfg.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dsa_gfg.dir/clean

CMakeFiles/dsa_gfg.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\thein\Desktop\dsa-gfg C:\Users\thein\Desktop\dsa-gfg C:\Users\thein\Desktop\dsa-gfg\cmake-build-debug C:\Users\thein\Desktop\dsa-gfg\cmake-build-debug C:\Users\thein\Desktop\dsa-gfg\cmake-build-debug\CMakeFiles\dsa_gfg.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dsa_gfg.dir/depend

