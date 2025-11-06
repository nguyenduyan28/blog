cmake_minimum_required(VERSION 3.16)
project(my_beast_server CXX)
set(CMAKE_CXX_STANDARD 17)

include_directories(/opt/homebrew/opt/boost/include)

add_executable(server backend/http_server.cpp)
