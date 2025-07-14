#ifndef LOGICA_DE_MOVIMIENTO_H
#define LOGICA_DE_MOVIMIENTO_H

#include "IPersonaje.h"
#include <vector>

class LogicaDeMovimiento {
public:
    // Método que mueve al personaje basado en la dirección dada
    void mover(std::vector<IPersonaje*> &personajes, char direccion);
};

#endif // LOGICA_DE_MOVIMIENTO_H
