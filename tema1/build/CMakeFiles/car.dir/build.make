# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build

# Include any dependencies generated for this target.
include CMakeFiles/car.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/car.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/car.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/car.dir/flags.make

CMakeFiles/car.dir/codegen:
.PHONY : CMakeFiles/car.dir/codegen

CMakeFiles/car.dir/src/main.cpp.o: CMakeFiles/car.dir/flags.make
CMakeFiles/car.dir/src/main.cpp.o: /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/main.cpp
CMakeFiles/car.dir/src/main.cpp.o: CMakeFiles/car.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/car.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/car.dir/src/main.cpp.o -MF CMakeFiles/car.dir/src/main.cpp.o.d -o CMakeFiles/car.dir/src/main.cpp.o -c /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/main.cpp

CMakeFiles/car.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/car.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/main.cpp > CMakeFiles/car.dir/src/main.cpp.i

CMakeFiles/car.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/car.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/main.cpp -o CMakeFiles/car.dir/src/main.cpp.s

CMakeFiles/car.dir/src/car.cpp.o: CMakeFiles/car.dir/flags.make
CMakeFiles/car.dir/src/car.cpp.o: /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/car.cpp
CMakeFiles/car.dir/src/car.cpp.o: CMakeFiles/car.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/car.dir/src/car.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/car.dir/src/car.cpp.o -MF CMakeFiles/car.dir/src/car.cpp.o.d -o CMakeFiles/car.dir/src/car.cpp.o -c /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/car.cpp

CMakeFiles/car.dir/src/car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/car.dir/src/car.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/car.cpp > CMakeFiles/car.dir/src/car.cpp.i

CMakeFiles/car.dir/src/car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/car.dir/src/car.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/car.cpp -o CMakeFiles/car.dir/src/car.cpp.s

CMakeFiles/car.dir/src/carpark.cpp.o: CMakeFiles/car.dir/flags.make
CMakeFiles/car.dir/src/carpark.cpp.o: /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/carpark.cpp
CMakeFiles/car.dir/src/carpark.cpp.o: CMakeFiles/car.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/car.dir/src/carpark.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/car.dir/src/carpark.cpp.o -MF CMakeFiles/car.dir/src/carpark.cpp.o.d -o CMakeFiles/car.dir/src/carpark.cpp.o -c /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/carpark.cpp

CMakeFiles/car.dir/src/carpark.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/car.dir/src/carpark.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/carpark.cpp > CMakeFiles/car.dir/src/carpark.cpp.i

CMakeFiles/car.dir/src/carpark.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/car.dir/src/carpark.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/src/carpark.cpp -o CMakeFiles/car.dir/src/carpark.cpp.s

# Object files for target car
car_OBJECTS = \
"CMakeFiles/car.dir/src/main.cpp.o" \
"CMakeFiles/car.dir/src/car.cpp.o" \
"CMakeFiles/car.dir/src/carpark.cpp.o"

# External object files for target car
car_EXTERNAL_OBJECTS =

car: CMakeFiles/car.dir/src/main.cpp.o
car: CMakeFiles/car.dir/src/car.cpp.o
car: CMakeFiles/car.dir/src/carpark.cpp.o
car: CMakeFiles/car.dir/build.make
car: CMakeFiles/car.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable car"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/car.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/car.dir/build: car
.PHONY : CMakeFiles/car.dir/build

CMakeFiles/car.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/car.dir/cmake_clean.cmake
.PHONY : CMakeFiles/car.dir/clean

CMakeFiles/car.dir/depend:
	cd /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1 /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1 /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build /Users/cristiturcan/Facultate/AN4/SEM1/PAOO/teme/PAOO/tema1/build/CMakeFiles/car.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/car.dir/depend

