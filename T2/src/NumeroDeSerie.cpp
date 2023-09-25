/*
 * @file NumeroDeSerie.cpp
 * @authors Diego Padilla.
 * @date 24/9/2023
 */
#include "NumeroDeSerie.hpp"

// Iniciando el conteo siempre en cero
int NumeroDeSerie::conteo  = 0;

// Le asigna un numero de serie a cada barco
NumeroDeSerie::NumeroDeSerie() {
    conteo++; // Iniciando los numeros de serie en  1
    numSerie = conteo++;
}

// Obtiene el nuemero de Serie de cada barco
int NumeroDeSerie::getNumSerie() const {
    return numSerie;
}


void NumeroDeSerie::NumSerieBarco() {
    cout<<"Soy el objeto numero: "<<numSerie<<endl;
}
