cmake_minimum_required(VERSION 3.19)
project(PAT)

set(CMAKE_CXX_STANDARD 14)

add_executable(PAT main.cpp)
add_executable(RankGrade Algorithm/RankGrade.cpp)