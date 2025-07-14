#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Avatar.h"

class AvatarCPU : public Avatar {
public:
    void mover() {
        int direccion = std::rand() % 4; // Genera un número entre 0 y 3
        switch (direccion) {
        case 0: std::cout << "AvatarCPU se mueve hacia arriba.\n"; break;
        case 1: std::cout << "AvatarCPU se mueve hacia abajo.\n"; break;
        case 2: std::cout << "AvatarCPU se mueve hacia la izquierda.\n"; break;
        case 3: std::cout << "AvatarCPU se mueve hacia la derecha.\n"; break;
    }
 }
};
