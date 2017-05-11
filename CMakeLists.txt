cmake_minimum_required(VERSION 3.6)
project(ProgressBar)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)

set(SOURCE_FILES
        main.cpp
        Observer.cpp
        Observer.h
        Subject.cpp
        Subject.h
        Grafica.cpp
        Grafica.h
        FileManage.cpp
        FileManage.h
        Risorse.cpp
        Risorse.h
        ProgressBar.cpp
        ProgressBar.h Disp.cpp Disp.h)

add_executable(ProgressBar ${SOURCE_FILES})
add_library(core ${SOURCE_FILES})

set(CURSES_NEED_NCURSES,TRUE)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIRS})
target_link_libraries(ProgressBar ${CURSES_LIBRARIES})