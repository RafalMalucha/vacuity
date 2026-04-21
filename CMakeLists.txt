cmake_minimum_required(VERSION 3.30)

project (vacuity)

add_executable(vacuity src/main.cpp
            src/core/position/PositionStorage.cpp)
