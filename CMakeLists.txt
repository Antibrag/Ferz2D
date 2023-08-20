cmake_minimum_required(VERSION 3.2)

set(PROJECT_NAME Ferz2D)

project(${PROJECT_NAME})

find_package(SFML 2.6 COMPONENTS system graphics network audio window)

add_library(objects_lib STATIC src/engine/objects_lib/objects_headers.hpp src/engine/objects_lib/objects.cpp)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME}
                        PUBLIC 
                        objects_lib
                        sfml-graphics 
                        sfml-system 
                        sfml-window 
                        sfml-audio 
                        sfml-network
)

target_include_directories(${PROJECT_NAME} ${CMAKE_BUILD_RPATH}/include)