cmake_minimum_required(VERSION 3.21)
project(c_base C)

set(CMAKE_C_STANDARD 99)


add_executable(main home/040402.c)
add_executable(Test test/Test.c)

add_executable(040402 home/040402.c)