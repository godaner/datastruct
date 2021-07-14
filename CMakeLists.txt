cmake_minimum_required(VERSION 3.19)
project(datastruct C)
set(CMAKE_C_STANDARD 11)

include_directories(.)
# 如果导入.h，那么这里需要指定实现
add_executable(sqlistmain.c sqlistmain.c)
add_executable(linklistmain.c linklistmain.c linklist.c)
add_executable(dlinklistmain.c dlinklistmain.c)
add_executable(sqstackmain.c sqstackmain.c)
add_executable(lstackmain.c lstackmain.c lstack.c)
add_executable(sqqueuemain.c sqqueuemain.c)
add_executable(lqueuemain.c lqueuemain.c lqueue.c)
add_executable(validatebracketmain.c lstack.c validatebracketmain.c)
add_executable(expressionvaluemain.c lstack.c expressionvaluemain.c)
add_executable(sqstringmain.c sqstringmain.c sqstring.c)
add_executable(binarytreemain.c binarytreemain.c linklist.c lstack.c lqueue.c binarytree.c)


