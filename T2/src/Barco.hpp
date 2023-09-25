#ifndef BARCO_HPP
#define BARCO_HPP

#include "Angulo.hpp"
#include "NumeroDeSerie.hpp"

class Barco {
private:
    NumeroDeSerie* numeroDeSerie;
    Angulo* latitud;
    Angulo* longitud;

public:
    Barco( Angulo* = new Angulo(), Angulo* = new Angulo());

    void ingresarCoordenadas();

    string toString();

    NumeroDeSerie* getNumeroDeSerie() const;

};

#endif // BARCO_HPP

