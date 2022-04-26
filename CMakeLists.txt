cmake_minimum_required(VERSION 3.20)
project(untitled9)


set(Headers Player.h Environment.h)
add_executable(untitled9 ${PROJECT_SOURCE_DIR}/ main.cpp Player.cpp Environment.cpp)

