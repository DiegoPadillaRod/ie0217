/*
 * @file estudiante.hpp
 * @authors Diego Padilla.
 * @date 03/10/2023
 */
#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

/**
 * @brief Clase que que se encargará de contener los atributos y los metodos especificados.
 */
class Estudiante {
private:
    std::string nombre;
    float* calificacion;

public:
    Estudiante( std::string nombre, float calificacion);
    void MostrarInformacion();
    ~Estudiante();
};

#endif


