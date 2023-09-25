#include "NumeroDeSerie.hpp"

int NumeroDeSerie::conteo  = 0;

NumeroDeSerie::NumeroDeSerie() {
    conteo++;
    numSerie = conteo++;
}


int NumeroDeSerie::getNumSerie() const {
    return numSerie;
}

void NumeroDeSerie::NumSerieBarco() {
    cout<<"Soy el objeto numero: "<<numSerie<<endl;
}
