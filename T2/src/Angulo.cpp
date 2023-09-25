/*
 * @file Angulo.cpp
 * @authors Diego Padilla.
 * @date 24/9/2023
 */
#include "Angulo.hpp"

// Constructor
Angulo::Angulo(int grados, float minutos, char direccion) {
    this->grados = grados;
    this->minutos = minutos;
    this->direccion = direccion;
}

// Pidiendo al usuario las coordenadas
void Angulo::ingresarDatos(){
    cout<< "Ingrese los Grados: ";
    cin>>this->grados;
    cout<< "Ingrese los Minutos: ";
    cin>>this->minutos;
    cout<< "Ingrese la Direccion: ";
    cin>>this->direccion;
}

// Desplegando en pantalla las coordenadas ingresadas
string Angulo::mostrarAngulo() {
    stringstream s;
    s << grados << "\xF8" << minutos << "' " << direccion << endl;
    return s.str();
}