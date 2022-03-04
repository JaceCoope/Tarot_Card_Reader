cmake_minimum_required(VERSION 3.21)
project(Tarot_Card_Reader)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tarot_Card_Reader reading_driver.cpp Tarot_Card_Resources.h)
