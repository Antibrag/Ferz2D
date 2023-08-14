cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME Ferz2D)

project(${PROJECT_NAME})

add_subdirectory(src/engine/objects_lib)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC objects_headers)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/engine/objects_lib)