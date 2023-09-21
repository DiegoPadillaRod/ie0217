#ifndef UNTITLED_BOATS_H
#define UNTITLED_BOATS_H

#include <iostream>
#include <iomanip>

class Angulo {
public:
    int grados;
    float minutos;
    char direccion;

    Angulo (int = 0, float = 0.0, char = 'F');

    void mostrarAngulo();

    

};

#endif //UNTITLED_FUN_H