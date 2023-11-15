cmake_minimum_required(VERSION 3.26)
project(STL)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(STL
        ej1/ej1.cpp
        ej2/triangulo.cpp
        circulo.cpp
)
