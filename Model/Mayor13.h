//
// Created by lufe0 on 7/05/2021.
//

#ifndef CASINO_MAYOR13_H
#define CASINO_MAYOR13_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>
#include <iostream> // Necesario para usar cout

class Mayor13 : public Juego {

protected:
    float calcularResultado(float gonzosApostar) override;

public:
    ~Mayor13() override = default;

    float jugar(float gonzosApostar) override;

    // Nuevo método obligatorio que muestra las reglas del juego
    void mostrarReglas() const override;
};

#endif //CASINO_MAYOR13_H
