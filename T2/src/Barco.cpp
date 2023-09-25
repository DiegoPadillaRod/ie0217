#include "Barco.hpp"

using namespace std;
Barco::Barco( Angulo * lat, Angulo * lon) {
    numeroDeSerie = new NumeroDeSerie();
    latitud = lat;
    longitud = lon;
}

void Barco::ingresarCoordenadas() {
    latitud->ingresarDatos();
    cout << endl;
    longitud->ingresarDatos();
}

string Barco::toString() {
    stringstream s;
    s<<"Coordenadas del barco con Numero de serie:\t"<<numeroDeSerie->getNumSerie()<<"\n"
    <<"Latitud: "<<latitud->mostrarAngulo()<<endl
    <<"Longitud: "<<longitud->mostrarAngulo()<<endl;
    return s.str();
}

NumeroDeSerie *Barco::getNumeroDeSerie() const {
    return numeroDeSerie;
}

