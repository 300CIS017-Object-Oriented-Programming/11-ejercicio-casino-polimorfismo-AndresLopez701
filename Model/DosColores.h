//
// Created by lufe0 on 8/05/2021.
//

#ifndef CASINO_DOSCOLORES_H
#define CASINO_DOSCOLORES_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

class DosColores : public Juego {

protected:
    int colorJugador;
    int colorCasino;

    float calcularResultado(float gonzosApostar) override;

public:
    float jugar(float gonzosApostar) override;

    ~DosColores() override = default;

    // Nuevo método obligatorio que muestra las reglas del juego
    void mostrarReglas() const override;
};

#endif //CASINO_DOSCOLORES_H
