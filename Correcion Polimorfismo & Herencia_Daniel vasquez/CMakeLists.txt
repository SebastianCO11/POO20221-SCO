cmake_minimum_required(VERSION 3.21)
project(FigurasPOO)

set(CMAKE_CXX_STANDARD 14)

add_executable(FigurasPOO main.cpp View.cpp View.h AbstractFigura.cpp AbstractFigura.h Circulo.cpp Circulo.h Cuadrado.cpp Cuadrado.h Rectangulo.cpp Rectangulo.h Triangulo.cpp Triangulo.h)
