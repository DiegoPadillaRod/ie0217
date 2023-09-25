#ifndef NUMERO_DE_SERIE_HPP
#define NUMERO_DE_SERIE_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
using namespace std;
class NumeroDeSerie {
private:
    int numSerie;

public:
    NumeroDeSerie();
    static int conteo;
    void NumSerieBarco();
    
    int getNumSerie() const;
};

#endif // NUMERO_DE_SERIE_HPP
