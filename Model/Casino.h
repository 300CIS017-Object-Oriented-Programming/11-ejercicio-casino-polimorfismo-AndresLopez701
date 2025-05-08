//
// Created by lufe0 on 7/05/2021.
//

#ifndef CASINO_CASINO_H
#define CASINO_CASINO_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "Juego.h"
#include "Mayor13.h"
#include "DosColores.h"
#include "Slots.h"
#include "ParImpar.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::unordered_map;
using std::iterator;

class Casino {
private:
    vector<Juego *> juegosDisponibles; // Almacena los juegos disponibles en el casino
    unordered_map<long, Jugador *> jugadoresMap; // Mapa de jugadores por ID

    bool verPuedeContinuar(int idJugador, float gonzosApostar); // Verifica si el jugador tiene suficiente saldo para jugar

public:
    Casino(); // Constructor

    virtual ~Casino(); // Destructor

    float convertirPesosAGonzos(float dinero); // Convierte los pesos a Gonzos

    bool verExisteJugador(long id); // Verifica si el jugador existe

    void retirarJugador(long id); // Retira un jugador del casino

    void agregarJugador(); // Agrega un nuevo jugador al casino

    float jugar(int idJuego, long idJugador, float gonzosApostar); // Inicia un juego para un jugador

    void verInfoJugador(long idJugador); // Muestra la información del jugador

    void recargarGonzos(long idJugador); // Recarga los Gonzos de un jugador

    vector<Juego*> getJuegosDisponibles(); // Devuelve el vector de juegos disponibles
};

#endif //CASINO_CASINO_H
