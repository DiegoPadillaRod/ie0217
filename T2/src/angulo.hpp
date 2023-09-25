#ifndef ANGULO_HPP
#define ANGULO_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>

using namespace std;

class Angulo {
public:
    int grados;
    float minutos;
    char direccion;

    Angulo (int = 0, float = 0.0, char = 'F');

    string mostrarAngulo();

    void ingresarDatos();
};

#endif //ANGULO_HPP