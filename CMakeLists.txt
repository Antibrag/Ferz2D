cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME Ferz2D)

project(${PROJECT_NAME})

set(MAIN_FILE src/main.cpp)
set(INCLUDE_PATH include/)
set(HEADERS_PATH headers/)
set(SFML_PATH include/SFML)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Executable)

add_executable(${PROJECT_NAME} ${MAIN_FILE})

add_subdirectory(${INCLUDE_PATH})
add_subdirectory(${HEADERS_PATH})
target_include_directories(${PROJECT_NAME} PRIVATE ${SFML_LIB})
target_include_directories(${PROJECT_NAME} PRIVATE ${HEADERS_PATH})
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-window sfml-system sfml-graphics)