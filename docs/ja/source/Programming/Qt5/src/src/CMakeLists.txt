cmake_minimum_required(VERSION 2.8)

#include_directories(${Qt5Widgets_INCLUDE_DIRS})

add_definitions(-Wall -O2 -std=c++11 ${Qt5Widgets_DEFINITIONS} -iframework ${QTDIR}/lib -fPIC -stdlib=libc++)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
