cmake_minimum_required(VERSION 3.19)
project(CASINO-Polimorfismo)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        # Nombre del ejecutable
        casino
        # Lista de archivos a compilar en este target
        main.cpp
        Model/Jugador.cpp
        View/View.cpp
        Model/Casino.cpp
        Model/Mayor13.cpp
        Model/DosColores.cpp
        Model/Slots.cpp
        Model/ParImpar.cpp
        # Archivos de cabecera necesarios
        Model/Casino.h
        Model/Juego.h
        Model/Mayor13.h
        Model/DosColores.h
        Model/Slots.h
        Model/ParImpar.h
        View/View.h
)
