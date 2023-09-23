#ifndef ANGULO_H
#define ANGULO_H

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream>

class Angulo {
public:
    int grados;
    float minutos;
    char direccion;

    Angulo (int = 0, float = 0.0, char = 'F');

    void mostrarAngulo();

    

};

#endif //ANGULO_H