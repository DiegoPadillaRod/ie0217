#include "boats.h"
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;
 // Constructor
Angulo::Angulo(int degrees, float minutes, char direction) {
        this->grados = degrees;
        this->minutos = minutes;
        this->direccion = direction;
}

void Angulo::mostrarAngulo() {
        cout << grados << "\xF8" << fixed << setprecision(2) << minutos << "' " << direccion << endl;
    }