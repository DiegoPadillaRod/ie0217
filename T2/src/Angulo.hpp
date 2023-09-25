/*
 * @file Angulo.hpp
 * @authors Diego Padilla.
 * @date 24/9/2023
 */

#ifndef ANGULO_HPP
#define ANGULO_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>

using namespace std;
// Clase angulo contrenda los metodos necesarios para el punto 1.
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
