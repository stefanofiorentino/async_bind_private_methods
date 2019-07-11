cmake_minimum_required(VERSION 3.14)
project(async_bind_private_methods)

set(CMAKE_CXX_STANDARD 11)

add_executable(async_bind_private_methods main.cpp)
target_link_libraries(async_bind_private_methods pthread)