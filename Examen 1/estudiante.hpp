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
private: //Atributos Privados
    std::string nombre; // string ya qque es una cadena de caracteres
    float* calificacion; // float permite ingresar decimales

public:
    Estudiante( std::string nombre, float calificacion); // Prototipo del constructor
    void Notas(); // Prototipo del metodo para desplegar la info
    ~Estudiante(); // Prototipo del Destructor
};

#endif


