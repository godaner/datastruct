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
include CMakeFiles/dlinklistmain.c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dlinklistmain.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dlinklistmain.c.dir/flags.make

CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.obj: CMakeFiles/dlinklistmain.c.dir/flags.make
CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.obj: CMakeFiles/dlinklistmain.c.dir/includes_C.rsp
CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.obj: ../dlinklistmain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\dlinklistmain.c.dir\dlinklistmain.c.obj -c C:\Users\godaner\CLionProjects\datastruct\dlinklistmain.c

CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\godaner\CLionProjects\datastruct\dlinklistmain.c > CMakeFiles\dlinklistmain.c.dir\dlinklistmain.c.i

CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\godaner\CLionProjects\datastruct\dlinklistmain.c -o CMakeFiles\dlinklistmain.c.dir\dlinklistmain.c.s

# Object files for target dlinklistmain.c
dlinklistmain_c_OBJECTS = \
"CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.obj"

# External object files for target dlinklistmain.c
dlinklistmain_c_EXTERNAL_OBJECTS =

dlinklistmain.c.exe: CMakeFiles/dlinklistmain.c.dir/dlinklistmain.c.obj
dlinklistmain.c.exe: CMakeFiles/dlinklistmain.c.dir/build.make
dlinklistmain.c.exe: CMakeFiles/dlinklistmain.c.dir/linklibs.rsp
dlinklistmain.c.exe: CMakeFiles/dlinklistmain.c.dir/objects1.rsp
dlinklistmain.c.exe: CMakeFiles/dlinklistmain.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable dlinklistmain.c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dlinklistmain.c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dlinklistmain.c.dir/build: dlinklistmain.c.exe

.PHONY : CMakeFiles/dlinklistmain.c.dir/build

CMakeFiles/dlinklistmain.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dlinklistmain.c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dlinklistmain.c.dir/clean

CMakeFiles/dlinklistmain.c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\godaner\CLionProjects\datastruct C:\Users\godaner\CLionProjects\datastruct C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug C:\Users\godaner\CLionProjects\datastruct\cmake-build-debug\CMakeFiles\dlinklistmain.c.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dlinklistmain.c.dir/depend

