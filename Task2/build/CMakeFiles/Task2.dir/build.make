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
CMAKE_SOURCE_DIR = /home/dmitriy/Desktop/AoCS/Task2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dmitriy/Desktop/AoCS/Task2/build

# Include any dependencies generated for this target.
include CMakeFiles/Task2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Task2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task2.dir/flags.make

CMakeFiles/Task2.dir/Structures/vehicle.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/Structures/vehicle.cpp.o: ../Structures/vehicle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task2.dir/Structures/vehicle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task2.dir/Structures/vehicle.cpp.o -c /home/dmitriy/Desktop/AoCS/Task2/Structures/vehicle.cpp

CMakeFiles/Task2.dir/Structures/vehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task2.dir/Structures/vehicle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dmitriy/Desktop/AoCS/Task2/Structures/vehicle.cpp > CMakeFiles/Task2.dir/Structures/vehicle.cpp.i

CMakeFiles/Task2.dir/Structures/vehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/Structures/vehicle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dmitriy/Desktop/AoCS/Task2/Structures/vehicle.cpp -o CMakeFiles/Task2.dir/Structures/vehicle.cpp.s

CMakeFiles/Task2.dir/Structures/bus.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/Structures/bus.cpp.o: ../Structures/bus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Task2.dir/Structures/bus.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task2.dir/Structures/bus.cpp.o -c /home/dmitriy/Desktop/AoCS/Task2/Structures/bus.cpp

CMakeFiles/Task2.dir/Structures/bus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task2.dir/Structures/bus.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dmitriy/Desktop/AoCS/Task2/Structures/bus.cpp > CMakeFiles/Task2.dir/Structures/bus.cpp.i

CMakeFiles/Task2.dir/Structures/bus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/Structures/bus.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dmitriy/Desktop/AoCS/Task2/Structures/bus.cpp -o CMakeFiles/Task2.dir/Structures/bus.cpp.s

CMakeFiles/Task2.dir/Structures/truck.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/Structures/truck.cpp.o: ../Structures/truck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Task2.dir/Structures/truck.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task2.dir/Structures/truck.cpp.o -c /home/dmitriy/Desktop/AoCS/Task2/Structures/truck.cpp

CMakeFiles/Task2.dir/Structures/truck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task2.dir/Structures/truck.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dmitriy/Desktop/AoCS/Task2/Structures/truck.cpp > CMakeFiles/Task2.dir/Structures/truck.cpp.i

CMakeFiles/Task2.dir/Structures/truck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/Structures/truck.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dmitriy/Desktop/AoCS/Task2/Structures/truck.cpp -o CMakeFiles/Task2.dir/Structures/truck.cpp.s

CMakeFiles/Task2.dir/Structures/car.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/Structures/car.cpp.o: ../Structures/car.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Task2.dir/Structures/car.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task2.dir/Structures/car.cpp.o -c /home/dmitriy/Desktop/AoCS/Task2/Structures/car.cpp

CMakeFiles/Task2.dir/Structures/car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task2.dir/Structures/car.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dmitriy/Desktop/AoCS/Task2/Structures/car.cpp > CMakeFiles/Task2.dir/Structures/car.cpp.i

CMakeFiles/Task2.dir/Structures/car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/Structures/car.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dmitriy/Desktop/AoCS/Task2/Structures/car.cpp -o CMakeFiles/Task2.dir/Structures/car.cpp.s

CMakeFiles/Task2.dir/Additional_functions/random.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/Additional_functions/random.cpp.o: ../Additional_functions/random.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Task2.dir/Additional_functions/random.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task2.dir/Additional_functions/random.cpp.o -c /home/dmitriy/Desktop/AoCS/Task2/Additional_functions/random.cpp

CMakeFiles/Task2.dir/Additional_functions/random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task2.dir/Additional_functions/random.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dmitriy/Desktop/AoCS/Task2/Additional_functions/random.cpp > CMakeFiles/Task2.dir/Additional_functions/random.cpp.i

CMakeFiles/Task2.dir/Additional_functions/random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/Additional_functions/random.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dmitriy/Desktop/AoCS/Task2/Additional_functions/random.cpp -o CMakeFiles/Task2.dir/Additional_functions/random.cpp.s

CMakeFiles/Task2.dir/Data_structures/container.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/Data_structures/container.cpp.o: ../Data_structures/container.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Task2.dir/Data_structures/container.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task2.dir/Data_structures/container.cpp.o -c /home/dmitriy/Desktop/AoCS/Task2/Data_structures/container.cpp

CMakeFiles/Task2.dir/Data_structures/container.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task2.dir/Data_structures/container.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dmitriy/Desktop/AoCS/Task2/Data_structures/container.cpp > CMakeFiles/Task2.dir/Data_structures/container.cpp.i

CMakeFiles/Task2.dir/Data_structures/container.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/Data_structures/container.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dmitriy/Desktop/AoCS/Task2/Data_structures/container.cpp -o CMakeFiles/Task2.dir/Data_structures/container.cpp.s

CMakeFiles/Task2.dir/main.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Task2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task2.dir/main.cpp.o -c /home/dmitriy/Desktop/AoCS/Task2/main.cpp

CMakeFiles/Task2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dmitriy/Desktop/AoCS/Task2/main.cpp > CMakeFiles/Task2.dir/main.cpp.i

CMakeFiles/Task2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dmitriy/Desktop/AoCS/Task2/main.cpp -o CMakeFiles/Task2.dir/main.cpp.s

# Object files for target Task2
Task2_OBJECTS = \
"CMakeFiles/Task2.dir/Structures/vehicle.cpp.o" \
"CMakeFiles/Task2.dir/Structures/bus.cpp.o" \
"CMakeFiles/Task2.dir/Structures/truck.cpp.o" \
"CMakeFiles/Task2.dir/Structures/car.cpp.o" \
"CMakeFiles/Task2.dir/Additional_functions/random.cpp.o" \
"CMakeFiles/Task2.dir/Data_structures/container.cpp.o" \
"CMakeFiles/Task2.dir/main.cpp.o"

# External object files for target Task2
Task2_EXTERNAL_OBJECTS =

../bin/Task2: CMakeFiles/Task2.dir/Structures/vehicle.cpp.o
../bin/Task2: CMakeFiles/Task2.dir/Structures/bus.cpp.o
../bin/Task2: CMakeFiles/Task2.dir/Structures/truck.cpp.o
../bin/Task2: CMakeFiles/Task2.dir/Structures/car.cpp.o
../bin/Task2: CMakeFiles/Task2.dir/Additional_functions/random.cpp.o
../bin/Task2: CMakeFiles/Task2.dir/Data_structures/container.cpp.o
../bin/Task2: CMakeFiles/Task2.dir/main.cpp.o
../bin/Task2: CMakeFiles/Task2.dir/build.make
../bin/Task2: CMakeFiles/Task2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ../bin/Task2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task2.dir/build: ../bin/Task2

.PHONY : CMakeFiles/Task2.dir/build

CMakeFiles/Task2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task2.dir/clean

CMakeFiles/Task2.dir/depend:
	cd /home/dmitriy/Desktop/AoCS/Task2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dmitriy/Desktop/AoCS/Task2 /home/dmitriy/Desktop/AoCS/Task2 /home/dmitriy/Desktop/AoCS/Task2/build /home/dmitriy/Desktop/AoCS/Task2/build /home/dmitriy/Desktop/AoCS/Task2/build/CMakeFiles/Task2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Task2.dir/depend

