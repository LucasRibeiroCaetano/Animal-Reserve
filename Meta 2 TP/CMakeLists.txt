cmake_minimum_required(VERSION 3.22)
project(Meta_2_TP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Meta_2_TP main.cpp Utils/utils.h Utils/utils.cpp Reserva/reserva.cpp Reserva/reserva.h Reserva/segmento.cpp Reserva/segmento.h)
