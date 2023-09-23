#include "angulo.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <fstream>

using namespace std;
 // Constructor
Angulo::Angulo(int grados, float minutos, char direccion) {
        this->grados = grados;
        this->minutos = minutos;
        this->direccion = direccion;
}

void Angulo::mostrarAngulo() {
        cout << grados << "\xF8" << minutos << "' " << direccion << endl;
}