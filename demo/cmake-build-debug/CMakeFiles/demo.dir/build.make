# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\develop\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\develop\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\demo.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\demo.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\demo.dir\flags.make

CMakeFiles\demo.dir\main.c.obj: CMakeFiles\demo.dir\flags.make
CMakeFiles\demo.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/demo.dir/main.c.obj"
	C:\develop\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\demo.dir\main.c.obj /FdCMakeFiles\demo.dir\ /FS -c D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\main.c
<<

CMakeFiles\demo.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/demo.dir/main.c.i"
	C:\develop\MICROS~1.0\VC\bin\cl.exe > CMakeFiles\demo.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\main.c
<<

CMakeFiles\demo.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/demo.dir/main.c.s"
	C:\develop\MICROS~1.0\VC\bin\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\demo.dir\main.c.s /c D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\main.c
<<

# Object files for target demo
demo_OBJECTS = \
"CMakeFiles\demo.dir\main.c.obj"

# External object files for target demo
demo_EXTERNAL_OBJECTS =

demo.exe: CMakeFiles\demo.dir\main.c.obj
demo.exe: CMakeFiles\demo.dir\build.make
demo.exe: CMakeFiles\demo.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable demo.exe"
	"C:\develop\JetBrains\CLion 2020.3.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\demo.dir --rc=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\mt.exe --manifests  -- C:\develop\MICROS~1.0\VC\bin\link.exe /nologo @CMakeFiles\demo.dir\objects1.rsp @<<
 /out:demo.exe /implib:demo.lib /pdb:D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\cmake-build-debug\demo.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\demo.dir\build: demo.exe

.PHONY : CMakeFiles\demo.dir\build

CMakeFiles\demo.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles\demo.dir\clean

CMakeFiles\demo.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\cmake-build-debug D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\cmake-build-debug D:\Repository\github\MinMonk\PublicRepo\clion-workspace\demo\cmake-build-debug\CMakeFiles\demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\demo.dir\depend
