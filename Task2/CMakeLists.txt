cmake_minimum_required(VERSION 3.16)
project(Task2)

set(CMAKE_CXX_STANDARD 17)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        # Headers
        Structures/vehicle.h
        Structures/bus.h
        Structures/truck.h
        Structures/car.h
        Additional_functions/random.h
        Data_structures/container.h
        # Sources
        Structures/vehicle.cpp
        Structures/bus.cpp
        Structures/truck.cpp
        Structures/car.cpp
        Additional_functions/random.cpp
        Data_structures/container.cpp
        main.cpp)

add_executable(Task2 ${SOURCE_FILES})
