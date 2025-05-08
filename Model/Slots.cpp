#include "Slots.h"
#include <iostream>

using namespace std;

// Eliminar este constructor si no es necesario
// Slots::Slots() {
//     srand(time(nullptr));  // Esta línea puede ir en otro lugar si es necesario
// }

float Slots::jugar(float gonzosApostar) {
    float gonzosResultado;
    int numMaxRandom = 7;
    int numMinRandom = 1;

    cout << "Se generarán tres números aleatorios del 1 al 7: \n";
    // Generación de números aleatorios
    slot1 = numMinRandom + rand() % numMaxRandom;
    slot2 = numMinRandom + rand() % numMaxRandom;
    slot3 = numMinRandom + rand() % numMaxRandom;

    cout << "Resultado slots: " << slot1 << " " << slot2 << " " << slot3 << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Slots::calcularResultado(float gonzosApostar) {
    float maxResult = 7;
    float lowestResult = 1.5;
    float tripleResult = 2;

    if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
        return maxResult * gonzosApostar; // Triple 7
    } else if (slot1 == slot2 && slot2 == slot3) {
        return tripleResult * gonzosApostar; // Tres iguales
    } else if (slot1 == slot2 + 1 && slot2 == slot3 + 1) {
        return lowestResult * gonzosApostar; // Escalera descendente
    } else {
        return 0; // Pierde todo
    }
}

// Implementación del nuevo método mostrarReglas()
void Slots::mostrarReglas() const {
    cout << "\n------ Reglas del juego 'Slots' ------\n";
    cout << "- Se generan tres números aleatorios del 1 al 7.\n";
    cout << "- Triple 7: ganas 7x lo apostado.\n";
    cout << "- Tres números iguales (excepto 777): ganas 2x lo apostado.\n";
    cout << "- Escalera descendente (ej. 5 4 3): ganas 1.5x lo apostado.\n";
    cout << "- Cualquier otro resultado: pierdes todo.\n";
    cout << "-----------------------------------------\n" << endl;
}
