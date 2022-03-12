cmake_minimum_required(VERSION 3.21)
project(richest_customer_wealth_leetcode)

set(CMAKE_CXX_STANDARD 23)

find_package(range-v3 REQUIRED)

add_executable(richest_customer_wealth_leetcode main.cpp)
target_link_libraries(richest_customer_wealth_leetcode PRIVATE range-v3::range-v3)
