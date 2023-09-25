#include "Angulo.hpp"

Angulo::Angulo(int grados, float minutos, char direccion) {
    this->grados = grados;
    this->minutos = minutos;
    this->direccion = direccion;
}

string Angulo::mostrarAngulo() {
    stringstream s;
    s << grados << "\xF8" << minutos << "' " << direccion << endl;
    return s.str();
}

void Angulo::ingresarDatos(){
    cout<< "Ingrese los Grados: ";
    cin>>this->grados;
    cout<< "Ingrese los Minutos: ";
    cin>>this->minutos;
    cout<< "Ingrese la Direccion: ";
    cin>>this->direccion;
}
