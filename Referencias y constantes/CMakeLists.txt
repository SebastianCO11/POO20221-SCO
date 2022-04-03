cmake_minimum_required(VERSION 3.21)
project(Referencias_y_constantes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Referencias_y_constantes main.cpp Employee.h Employee.cpp SalariedEmployee.h SalariedEmployee.cpp HourlyEmployee.h HourlyEmployee.cpp ComissionEmployee.h ComissionEmployee.cpp BasePlusComissionEmployee.h BasePlusComissionEmployee.cpp DailyEmployee.cpp DailyEmployee.h)
