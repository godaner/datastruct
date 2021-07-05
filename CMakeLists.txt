cmake_minimum_required(VERSION 3.19)
project(datastruct C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(sqlist sqlist.c)
add_executable(linklist linklist.c)
add_executable(dlinklist dlinklist.c)
add_executable(sqstack sqstack.c)
add_executable(lstack lstack.c)
add_executable(sqqueue sqqueue.c)
add_executable(lqueue lqueue.c)
add_executable(validatebracket validatebracket.c)


