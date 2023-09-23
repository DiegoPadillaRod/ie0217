#ifndef OBJETO_H
#define OBJETO_H
#include <iostream>

class ObjetoUnico {
private:
    int Serie;
    static int contador;

public:
    ObjetoUnico();
    int obtenerNumeroDeSerie() const;
    void informarNumeroDeSerie() const;
};

#endif
