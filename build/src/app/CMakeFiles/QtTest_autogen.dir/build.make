# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = C:\Qt\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = C:\Qt\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp\build

# Utility rule file for QtTest_autogen.

# Include any custom commands dependencies for this target.
include src/app/CMakeFiles/QtTest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/app/CMakeFiles/QtTest_autogen.dir/progress.make

src/app/CMakeFiles/QtTest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QtTest"
	cd /d C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp\build\src\app && C:\Qt\Tools\CMake_64\bin\cmake.exe -E cmake_autogen C:/Users/SamiDhiab/Theion_Repos/soft_wgm_user_interface_qt_cpp/build/src/app/CMakeFiles/QtTest_autogen.dir/AutogenInfo.json ""

QtTest_autogen: src/app/CMakeFiles/QtTest_autogen
QtTest_autogen: src/app/CMakeFiles/QtTest_autogen.dir/build.make
.PHONY : QtTest_autogen

# Rule to build all files generated by this target.
src/app/CMakeFiles/QtTest_autogen.dir/build: QtTest_autogen
.PHONY : src/app/CMakeFiles/QtTest_autogen.dir/build

src/app/CMakeFiles/QtTest_autogen.dir/clean:
	cd /d C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp\build\src\app && $(CMAKE_COMMAND) -P CMakeFiles\QtTest_autogen.dir\cmake_clean.cmake
.PHONY : src/app/CMakeFiles/QtTest_autogen.dir/clean

src/app/CMakeFiles/QtTest_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp\src\app C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp\build C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp\build\src\app C:\Users\SamiDhiab\Theion_Repos\soft_wgm_user_interface_qt_cpp\build\src\app\CMakeFiles\QtTest_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/app/CMakeFiles/QtTest_autogen.dir/depend

