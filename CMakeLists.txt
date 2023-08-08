cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME Ferz2D)

project(${PROJECT_NAME})

set(MAIN_FILE main.cpp)
set(INCLUDE_PATH include/)
set(SFML_PATH include/SFML)

add_executable(${PROJECT_NAME} ${MAIN_FILE})

add_subdirectory(${INCLUDE_PATH})
target_include_directories(${PROJECT_NAME} PRIVATE ${SFML_LIB}
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-window sfml-system sfml-graphics)