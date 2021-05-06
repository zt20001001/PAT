cmake_minimum_required(VERSION 3.19)
project(PAT)

set(CMAKE_CXX_STANDARD 14)

add_executable(PAT main.cpp)
add_executable(RankGrade Algorithm/RankGrade.cpp)
add_executable(AnotherOutput Algorithm/AnotherOutput.cpp)
add_executable(PrimePairs Algorithm/PrimePairs.cpp)
add_executable(ReverseDialog Algorithm/ReverseDialog.cpp)
add_executable(CountNumber Algorithm/CountNumber.cpp)
add_executable(MoveRight Algorithm/MoveRight.cpp)