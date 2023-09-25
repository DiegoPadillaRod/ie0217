/*
 * @file Barco.hpp
 * @authors Diego Padilla.
 * @date 24/9/2023
 */
#ifndef BARCO_HPP
#define BARCO_HPP

#include "Angulo.hpp"
#include "NumeroDeSerie.hpp"

// Clase Barco contrenda los metodos necesarios para el punto 3.
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

