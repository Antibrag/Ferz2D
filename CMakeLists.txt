cmake_minimum_required(VERSION 3.2)

set(PROJECT_NAME Ferz2D)

project(${PROJECT_NAME})

find_package(SFML 2.6 COMPONENTS system graphics network audio window)

add_subdirectory(engine/object)
add_subdirectory(engine/properties)

add_executable(${PROJECT_NAME} test/test.cpp)

target_link_libraries(${PROJECT_NAME}
                        PUBLIC 
                        object_lib
                        properties_lib
                        sfml-graphics 
                        sfml-system 
                        sfml-window 
                        sfml-audio 
                        sfml-network
)

#target_include_directories(${PROJECT_NAME} ${CMAKE_BUILD_RPATH}/include)