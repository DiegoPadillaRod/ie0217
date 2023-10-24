/*
 * @file Flota.cpp
 * @authors Diego Padilla.
 * @date 24/9/2023
 */
#include "Flota.hpp"
#include "NumeroDeSerie.hpp"
#include "Angulo.hpp"

using namespace std;
Flota::Flota() {
    Barcos = new std::vector<Barco*>;
}
Flota::~Flota() {
    delete Barcos;
}

void Flota::IngresarBarco() {
    Barco* B = new Barco();
    B->ingresarCoordenadas();
    Barcos->push_back(B);
}

bool Flota::BorrarBarco(int numSerie) {
    for (size_t i = 0; i < Barcos->size(); i++) {
        if (Barcos->at(i)->getNumeroDeSerie()->getNumSerie() == numSerie) {
            Barcos->erase(Barcos->begin() + i);
            return true;
        }
    }
    return false;
}

void Flota::OrdenarFlota() {
    for(Barco* b : *Barcos){
        cout << b->toString() << endl;
    }
}