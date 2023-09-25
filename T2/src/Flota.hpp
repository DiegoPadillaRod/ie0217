#ifndef FLOTA_HPP
#define FLOTA_HPP
#include "Barco.hpp"
#include "NumeroDeSerie.hpp"
#include <vector>

class Flota {
private:
    vector<Barco*>* Barcos;
public:
    Flota();
    virtual ~Flota();
    void IngresarBarco();
    bool BorrarBarco(int numSerie);
    void OrdenarFlota();
    void QuickSort();
    void MergeSort();

};


#endif //UNTITLED1_FLOTA_H
