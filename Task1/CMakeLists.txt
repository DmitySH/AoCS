cmake_minimum_required(VERSION 3.20)
project(Task1)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        # Headers
        Additional_functions/random.h
        Structures/truck.h
        Structures/bus.h
        Structures/car.h
        Structures/vehicle.h
        Data_structures/container.h

        # Sources
        Additional_functions/random.cpp
        Structures/truck.cpp
        main.cpp
        Structures/bus.cpp
        Structures/car.cpp
        Structures/vehicle.cpp
        Data_structures/container.cpp)

add_executable(AoCS ${SOURCE_FILES})
