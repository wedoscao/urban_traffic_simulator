cmake_minimum_required(VERSION 4.4.2)
project(UrbanTrafficSimulator LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)

add_library(Intersection src/intersection.cpp)
target_include_directories(Intersection PRIVATE include)
target_link_libraries(${PROJECT_NAME} PRIVATE Intersection)

add_library(Road src/road.cpp)
target_include_directories(Road PRIVATE include)
target_link_libraries(${PROJECT_NAME} PRIVATE Road)
