#include "DosColores.h"
#include <iostream>

using namespace std;

float DosColores::jugar(float gonzosApostar) {
    float gonzosResultado;
    int numMaxRandom = 7;
    int numMinRandom = 1;

    // Se generan los números aleatorios
    numeroJugador = numMinRandom + rand() % numMaxRandom; // número de 1 a 6
    numeroCasino = numMinRandom + rand() % numMaxRandom;
    colorCasino = rand() % 2; // 0 o 1

    cout << "Tu número aleatorio es: " << numeroJugador << endl;
    do {
        cout << "Elije un color: " << endl;
        cout << "1. Blanco" << endl;
        cout << "2. Negro" << endl;
        cin >> colorJugador;
        --colorJugador; // Ajustar el valor ingresado (1 → 0, 2 → 1)
    } while (colorJugador != 0 && colorJugador != 1); // Validación de entrada

    cout << "Número del casino: " << numeroCasino << endl;
    cout << "Color del casino: " << (colorCasino == 0 ? "Blanco" : "Negro") << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    float lowestResult = 0;
    float maxResult = 4;
    float midResult = 1.5;

    // Coincide número y color
    if (numeroJugador == numeroCasino && colorJugador == colorCasino) {
        return maxResult * gonzosApostar;
    }
    // Coincide solo el número
    else if (numeroJugador == numeroCasino) {
        return midResult * gonzosApostar;
    }
    // Coincide solo el color
    else if (colorJugador == colorCasino) {
        return gonzosApostar; // No gana ni pierde
    }
    // No coincide nada
    else {
        return lowestResult;
    }
}

// Nueva implementación de mostrarReglas()
void DosColores::mostrarReglas() const {
    cout << "\n------ Reglas del juego 'Dos Colores' ------\n";
    cout << "- El jugador lanza un dado (1 a 6) y elige un color (Blanco o Negro).\n";
    cout << "- El casino también lanza un dado y selecciona un color aleatoriamente.\n";
    cout << "- Coincidencia de número y color: gana 4x lo apostado.\n";
    cout << "- Solo número: gana 1.5x.\n";
    cout << "- Solo color: no gana ni pierde.\n";
    cout << "- Ninguna coincidencia: pierde todo.\n";
    cout << "---------------------------------------------\n" << endl;
}
