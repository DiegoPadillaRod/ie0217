#include "objeto.hpp"
#include <iostream>

using namespace std;

int ObjetoUnico::contador = 0;

ObjetoUnico::ObjetoUnico() {
    contador++;
    Serie = contador;
}

int ObjetoUnico::obtenerNumeroDeSerie() const {
    return Serie;
}

void ObjetoUnico::informarNumeroDeSerie() const {
    cout << "Soy el objeto número " << Serie << endl;
}