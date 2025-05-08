#include "ParImpar.h"
#include <iostream>

using namespace std;

// Implementación del constructor de ParImpar
ParImpar::ParImpar() {
    srand(time(nullptr));  // Inicializa la semilla de los números aleatorios
    // Si no necesitas hacer más inicialización, este constructor puede quedar vacío
}

float ParImpar::jugar(float gonzosApostar) {
    int numero = rand() % 100;  // Genera un número aleatorio entre 0 y 99
    if (numero % 2 == 0) {  // Si el número es par
        return gonzosApostar;  // El jugador gana lo apostado
    } else {  // Si el número es impar
        return -gonzosApostar;  // El jugador pierde lo apostado
    }
}

void ParImpar::mostrarReglas() const {
    cout << "Reglas del juego 'Par o Impar':\n";
    cout << "- El jugador apuesta si el número será par o impar.\n";
    cout << "- Si acierta, gana lo apostado. Si falla, pierde todo.\n";
}

float ParImpar::calcularResultado(float gonzosApostar) {
    int numero = rand() % 100;  // Genera un número aleatorio entre 0 y 99
    if (numero % 2 == 0) {  // Si el número es par
        return gonzosApostar;  // El jugador gana lo apostado
    } else {  // Si el número es impar
        return -gonzosApostar;  // El jugador pierde lo apostado
    }
}

