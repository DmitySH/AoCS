cmake_minimum_required(VERSION 3.20)
project(AoCS)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        # Headers
        random.h
        truck.h
        bus.h
        car.h
        vehicle.h
        container.h
        # Sources
        random.cpp
        truck.cpp
        main.cpp
        bus.cpp
        car.cpp
        vehicle.cpp
        container.cpp)

add_executable(AoCS ${SOURCE_FILES})
