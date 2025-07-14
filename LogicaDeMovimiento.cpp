#include "LogicaDeMovimiento.h"
#include <iostream>

void LogicaDeMovimiento::mover(std::vector<IPersonaje*> &personajes, char direccion)
{
 for (auto personaje : personajes) {
 personaje->mover(direccion);
 }
}
