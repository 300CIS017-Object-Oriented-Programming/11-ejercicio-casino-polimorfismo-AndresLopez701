#ifndef CASINO_SLOTS_H
#define CASINO_SLOTS_H

/*
Slots es un juego en el que una máquina escoge aleatoriamente 3 símbolos (en algunos
modelos son 5). Si caen los 3 símbolos iguales o alguna combinación especial el jugador
ganará cierta cantidad, de lo contrario perderá lo apostado.

En esta versión de Slots se generarán 3 números entre 1 y 7. Si caen los 3 números
iguales el jugador ganará el doble de lo apostado, si consigue una escalera (números
sucesivos descendentes) ganará la mitad de lo apostado. Si llega a conseguir el triple 7
ganará 7 veces lo apostado. Si no consigue ninguna combinación ganadora, perderá lo apostado.
*/

#include "Juego.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

class Slots : public Juego {

private:
    int slot1, slot2, slot3;

protected:
    float calcularResultado(float gonzosApostar) override;

public:
    ~Slots() override = default;

    float jugar(float gonzosApostar) override;

    // Nuevo método obligatorio que muestra las reglas del juego
    void mostrarReglas() const override;
};

#endif //CASINO_SLOTS_H
