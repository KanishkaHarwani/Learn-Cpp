cmake_minimum_required(VERSION 3.10)
project(mp05_multithreaded_resource_pool)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(mp05_multithreaded_resource_pool src/main.cpp)

# Uncomment if this project needs threading:
# find_package(Threads REQUIRED)
# target_link_libraries(mp05_multithreaded_resource_pool PRIVATE Threads::Threads)
