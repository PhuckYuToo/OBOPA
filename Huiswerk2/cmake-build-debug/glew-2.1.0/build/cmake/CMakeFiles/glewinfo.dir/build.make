# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\phuck\CLionProjects\Huiswerk2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug

# Include any dependencies generated for this target.
include glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/depend.make

# Include the progress variables for this target.
include glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/progress.make

# Include the compile flags for this target's objects.
include glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/flags.make

glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.obj: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/flags.make
glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.obj: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/includes_C.rsp
glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.obj: ../glew-2.1.0/src/glewinfo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.obj"
	cd /d C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\glew-2.1.0\build\cmake && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\glewinfo.dir\__\__\src\glewinfo.c.obj   -c C:\Users\phuck\CLionProjects\Huiswerk2\glew-2.1.0\src\glewinfo.c

glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.i"
	cd /d C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\glew-2.1.0\build\cmake && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\phuck\CLionProjects\Huiswerk2\glew-2.1.0\src\glewinfo.c > CMakeFiles\glewinfo.dir\__\__\src\glewinfo.c.i

glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.s"
	cd /d C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\glew-2.1.0\build\cmake && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\phuck\CLionProjects\Huiswerk2\glew-2.1.0\src\glewinfo.c -o CMakeFiles\glewinfo.dir\__\__\src\glewinfo.c.s

glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/glewinfo.rc.obj: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/flags.make
glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/glewinfo.rc.obj: ../glew-2.1.0/build/glewinfo.rc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building RC object glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/glewinfo.rc.obj"
	cd /d C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\glew-2.1.0\build\cmake && C:\MinGW\bin\windres.exe -O coff $(RC_DEFINES) $(RC_INCLUDES) $(RC_FLAGS) C:\Users\phuck\CLionProjects\Huiswerk2\glew-2.1.0\build\glewinfo.rc CMakeFiles\glewinfo.dir\__\glewinfo.rc.obj

# Object files for target glewinfo
glewinfo_OBJECTS = \
"CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.obj" \
"CMakeFiles/glewinfo.dir/__/glewinfo.rc.obj"

# External object files for target glewinfo
glewinfo_EXTERNAL_OBJECTS =

bin/glewinfo.exe: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/__/src/glewinfo.c.obj
bin/glewinfo.exe: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/__/glewinfo.rc.obj
bin/glewinfo.exe: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/build.make
bin/glewinfo.exe: lib/libglew32d.dll.a
bin/glewinfo.exe: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/linklibs.rsp
bin/glewinfo.exe: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/objects1.rsp
bin/glewinfo.exe: glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ..\..\..\bin\glewinfo.exe"
	cd /d C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\glew-2.1.0\build\cmake && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\glewinfo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/build: bin/glewinfo.exe

.PHONY : glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/build

glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/clean:
	cd /d C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\glew-2.1.0\build\cmake && $(CMAKE_COMMAND) -P CMakeFiles\glewinfo.dir\cmake_clean.cmake
.PHONY : glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/clean

glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\phuck\CLionProjects\Huiswerk2 C:\Users\phuck\CLionProjects\Huiswerk2\glew-2.1.0\build\cmake C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\glew-2.1.0\build\cmake C:\Users\phuck\CLionProjects\Huiswerk2\cmake-build-debug\glew-2.1.0\build\cmake\CMakeFiles\glewinfo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : glew-2.1.0/build/cmake/CMakeFiles/glewinfo.dir/depend

