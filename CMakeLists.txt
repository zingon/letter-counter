cmake_minimum_required(VERSION 3.9)
project(letter_counter C)

set(CMAKE_C_STANDARD 99)


add_executable(letter_counter letters.h letters.c main.c )
