PROJECT(project)
cmake_minimum_required(VERSION 2.6)
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall  -O2")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -O2")
SET(CMAKE_CXX_FLAGS "-fPIC")

#for libbpf
include_directories(${CMAKE_SOURCE_DIR}/thirdparty)


set(EXECUTABLE_NAME "test-fun")
add_executable(${EXECUTABLE_NAME}
               ${CMAKE_SOURCE_DIR}/main.c 
               ${CMAKE_SOURCE_DIR}/module_a.c 
               ${CMAKE_SOURCE_DIR}/module_b.c
               ${CMAKE_SOURCE_DIR}/my_log.c)
