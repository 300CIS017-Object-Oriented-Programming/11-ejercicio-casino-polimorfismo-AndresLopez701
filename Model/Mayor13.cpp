//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"
#include <iostream>

using namespace std;

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    float lowestResult = 0.5;
    int numMaxRandom = 13;
    int numMinRandom = 1;

    numeroJugador = numMinRandom + rand() % numMaxRandom; // números de 1 a 13
    cout << "Tu número aleatorio es: " << numeroJugador << endl;

    do {
        cout << "¿Qué desea hacer?" << endl;
        cout << "1. Rendirse." << endl;
        cout << "2. Jugar." << endl;
        cout << "Opción: ";
        cin >> opcion;
    } while (opcion != 1 && opcion != 2); // Validación de entrada

    if (opcion == 1) {
        return lowestResult * gonzosApostar;
    }

    // El jugador decidió jugar entonces calcula el número del casino
    numeroCasino = numMinRandom + rand() % numMaxRandom; // números de 1 a 13
    cout << "Número del casino: " << numeroCasino << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Mayor13::calcularResultado(float gonzosApostar) {
    float maxResult = 2;
    float lowestResult = 0;
    if (numeroJugador > numeroCasino) {
        return maxResult * gonzosApostar;
    } else {
        return lowestResult;
    }
}

// Nueva implementación del método mostrarReglas()
void Mayor13::mostrarReglas() const {
    cout << "\nReglas del juego 'Mayor a 13':\n";
    cout << "- El jugador recibe un número aleatorio entre 1 y 13.\n";
    cout << "- Puede decidir rendirse y perderá la mitad de lo apostado.\n";
    cout << "- Si decide jugar, el casino también genera un número entre 1 y 13.\n";
    cout << "- Si el número del jugador es mayor, gana el doble de lo apostado.\n";
    cout << "- Si el número del jugador es menor o igual, pierde todo.\n" << endl;
}
