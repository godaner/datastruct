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
CMAKE_COMMAND = "F:\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\godaner\CLionProjects\datastruct

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sqlistmain.c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sqlistmain.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sqlistmain.c.dir/flags.make

CMakeFiles/sqlistmain.c.dir/sqlistmain.c.obj: CMakeFiles/sqlistmain.c.dir/flags.make
CMakeFiles/sqlistmain.c.dir/sqlistmain.c.obj: CMakeFiles/sqlistmain.c.dir/includes_C.rsp
CMakeFiles/sqlistmain.c.dir/sqlistmain.c.obj: ../sqlistmain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sqlistmain.c.dir/sqlistmain.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sqlistmain.c.dir\sqlistmain.c.obj -c C:\Users\godaner\CLionProjects\datastruct\sqlistmain.c

CMakeFiles/sqlistmain.c.dir/sqlistmain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sqlistmain.c.dir/sqlistmain.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\godaner\CLionProjects\datastruct\sqlistmain.c > CMakeFiles\sqlistmain.c.dir\sqlistmain.c.i

CMakeFiles/sqlistmain.c.dir/sqlistmain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sqlistmain.c.dir/sqlistmain.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\godaner\CLionProjects\datastruct\sqlistmain.c -o CMakeFiles\sqlistmain.c.dir\sqlistmain.c.s

# Object files for target sqlistmain.c
sqlistmain_c_OBJECTS = \
"CMakeFiles/sqlistmain.c.dir/sqlistmain.c.obj"

# External object files for target sqlistmain.c
sqlistmain_c_EXTERNAL_OBJECTS =

sqlistmain.c.exe: CMakeFiles/sqlistmain.c.dir/sqlistmain.c.obj
sqlistmain.c.exe: CMakeFiles/sqlistmain.c.dir/build.make
sqlistmain.c.exe: CMakeFiles/sqlistmain.c.dir/linklibs.rsp
sqlistmain.c.exe: CMakeFiles/sqlistmain.c.dir/objects1.rsp
sqlistmain.c.exe: CMakeFiles/sqlistmain.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sqlistmain.c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sqlistmain.c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sqlistmain.c.dir/build: sqlistmain.c.exe

.PHONY : CMakeFiles/sqlistmain.c.dir/build

CMakeFiles/sqlistmain.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sqlistmain.c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sqlistmain.c.dir/clean

CMakeFiles/sqlistmain.c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\godaner\CLionProjects\datastruct C:\Users\godaner\CLionProjects\datastruct C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles\sqlistmain.c.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sqlistmain.c.dir/depend

