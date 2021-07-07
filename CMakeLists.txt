cmake_minimum_required(VERSION 3.19)
project(datastruct C)
set(CMAKE_C_STANDARD 11)

include_directories(.)
add_executable(sqlistmain.c sqlistmain.c)
add_executable(linklistmain.c linklistmain.c)
add_executable(dlinklistmain.c dlinklistmain.c)
add_executable(sqstackmain.c sqstackmain.c)
add_executable(lstackmain.c lstackmain.c)
add_executable(sqqueuemain.c sqqueuemain.c)
add_executable(lqueuemain.c lqueuemain.c)
add_executable(validatebracketmain.c validatebracketmain.c)
add_executable(expressionvaluemain.c expressionvaluemain.c)
add_executable(sqstringmain.c sqstringmain.c sqstring.c)


