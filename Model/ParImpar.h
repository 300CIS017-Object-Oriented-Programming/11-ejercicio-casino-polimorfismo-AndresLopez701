#ifndef CASINO_PARIMPAR_H
#define CASINO_PARIMPAR_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>

class ParImpar : public Juego {
public:
    ParImpar();  // Constructor
    ~ParImpar() override = default;  // Destructor

    float jugar(float gonzosApostar) override;  // Implementación del método virtual
    void mostrarReglas() const override;  // Implementación del método virtual
    float calcularResultado(float gonzosApostar) override;  // Implementación del método virtual
};

#endif //CASINO_PARIMPAR_H
