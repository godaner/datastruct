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
include CMakeFiles/sqstack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sqstack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sqstack.dir/flags.make

CMakeFiles/sqstack.dir/sqstackmain.c.obj: CMakeFiles/sqstack.dir/flags.make
CMakeFiles/sqstack.dir/sqstackmain.c.obj: CMakeFiles/sqstack.dir/includes_C.rsp
CMakeFiles/sqstack.dir/sqstackmain.c.obj: ../sqstackmain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sqstack.dir/sqstackmain.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\sqstack.dir\sqstackmain.c.obj -c C:\Users\godaner\CLionProjects\datastruct\sqstackmain.c

CMakeFiles/sqstack.dir/sqstackmain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sqstack.dir/sqstackmain.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\godaner\CLionProjects\datastruct\sqstackmain.c > CMakeFiles\sqstack.dir\sqstackmain.c.i

CMakeFiles/sqstack.dir/sqstackmain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sqstack.dir/sqstackmain.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\godaner\CLionProjects\datastruct\sqstackmain.c -o CMakeFiles\sqstack.dir\sqstackmain.c.s

# Object files for target sqstack
sqstack_OBJECTS = \
"CMakeFiles/sqstack.dir/sqstackmain.c.obj"

# External object files for target sqstack
sqstack_EXTERNAL_OBJECTS =

sqstack.exe: CMakeFiles/sqstack.dir/sqstackmain.c.obj
sqstack.exe: CMakeFiles/sqstack.dir/build.make
sqstack.exe: CMakeFiles/sqstack.dir/linklibs.rsp
sqstack.exe: CMakeFiles/sqstack.dir/objects1.rsp
sqstack.exe: CMakeFiles/sqstack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sqstack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sqstack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sqstack.dir/build: sqstack.exe

.PHONY : CMakeFiles/sqstack.dir/build

CMakeFiles/sqstack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sqstack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sqstack.dir/clean

CMakeFiles/sqstack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\godaner\CLionProjects\datastruct C:\Users\godaner\CLionProjects\datastruct C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles\sqstack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sqstack.dir/depend

