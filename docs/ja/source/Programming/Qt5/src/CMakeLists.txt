cmake_minimum_required(VERSION 2.8)
project(sample)

set(CMAKE_CXX_COMPILER /usr/bin/g++ )
set(CMAKE_PREFIX_PATH $ENV{QTDIR})
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
# text
find_package(Qt5Widgets REQUIRED)

add_subdirectory(src)

