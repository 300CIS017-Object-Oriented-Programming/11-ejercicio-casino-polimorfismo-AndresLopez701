#include "View.h"
#include <iostream>

using namespace std;

void View::verPrincipal() {
    int opcion;

    do {
        cout << "\n------ BIENVENIDO AL CASINO ------" << endl;
        cout << "1. Agregar jugador" << endl;
        cout << "2. Jugar" << endl;
        cout << "3. Ver información del jugador" << endl;
        cout << "4. Recargar Gonzos" << endl;
        cout << "5. Retirar jugador" << endl;
        cout << "6. Ver reglas de un juego" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                casino.agregarJugador();
                break;
            case 2:
                jugarView();
                break;
            case 3:
                verInfoJugadorView();
                break;
            case 4:
                recargarGonzosView();
                break;
            case 5:
                retirarJugadorView();
                break;
            case 6:
                mostrarReglasJuego();
                break;
            case 0:
                cout << "¡Gracias por visitar el Casino Gon$ino!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 0);
}

void View::jugarView() {
    long idJugador;
    int idJuego;
    float gonzos;

    cout << "\nIngrese su ID de jugador: ";
    cin >> idJugador;

    cout << "Seleccione el juego que desea jugar:" << endl;
    cout << "1. Mayor de 13" << endl;
    cout << "2. Dos Colores" << endl;
    cout << "3. Slots" << endl;
    cout << "4. Par o Impar" << endl;
    cout << "Seleccione opción: ";
    cin >> idJuego;

    cout << "Ingrese la cantidad de Gonzos a apostar: ";
    cin >> gonzos;

    try {
        float resultado = casino.jugar(idJuego, idJugador, gonzos);
        if (resultado >= 0) {
            cout << "¡Ganaste " << resultado << " Gonzos!" << endl;
        } else {
            cout << "Perdiste " << -resultado << " Gonzos." << endl;
        }
        cout << "Equivalente en pesos: $" << (resultado * 100) << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }
}

void View::verInfoJugadorView() {
    long idJugador;
    cout << "\nIngrese el ID del jugador: ";
    cin >> idJugador;

    try {
        casino.verInfoJugador(idJugador);
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }
}

void View::recargarGonzosView() {
    long idJugador;
    cout << "\nIngrese el ID del jugador: ";
    cin >> idJugador;

    try {
        casino.recargarGonzos(idJugador);
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }
}

void View::retirarJugadorView() {
    long idJugador;
    cout << "\nIngrese el ID del jugador a retirar: ";
    cin >> idJugador;

    try {
        casino.retirarJugador(idJugador);
        cout << "Jugador eliminado exitosamente." << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }
}

void View::mostrarReglasJuego() {
    int opcion;
    cout << "\nSeleccione el juego para ver sus reglas:" << endl;
    cout << "1. Mayor de 13" << endl;
    cout << "2. Dos Colores" << endl;
    cout << "3. Slots" << endl;
    cout << "4. Par o Impar" << endl;
    cout << "Seleccione opción: ";
    cin >> opcion;

    if (opcion < 1 || opcion > 4) {
        cout << "Opción inválida." << endl;
        return;
    }

    try {
        vector<Juego*> juegos = casino.getJuegosDisponibles();
        juegos.at(opcion - 1)->mostrarReglas();
    } catch (const exception &e) {
        cout << "Error al mostrar reglas: " << e.what() << endl;
    }
}
