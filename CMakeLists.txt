cmake_minimum_required(VERSION 3.9.1) 
project(list) 

set(CMAKE_CXX_STANDARD 14)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)



set(SOURCES main.cpp 
            ForwardList.cpp 
            ForwardListIterator.cpp)

add_executable(list ${SOURCES})
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
