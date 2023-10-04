/*
 * @file estudiante.cpp
 * @authors Diego Padilla.
 * @date 03/10/2023
 */
#include "estudiante.hpp"
#include <iostream>
#include <stdexcept>

Estudiante::Estudiante(std::string nombre, float calificacion) { // Constructor le asigna un espacio en la memoria a nombre y calificacion. 
    this->nombre = nombre;
    this->calificacion = new float(calificacion);

    *this->calificacion = calificacion; // Le asigna el valor dado por el usuario a calificacion.
}

void Estudiante::MostrarInformacion() { // Este metodo despliega en pantalla la info brindada por el usuario
    std::cout << "Estudiante: " << nombre << std::endl;
    std::cout << "Calificacion: " << *calificacion << std::endl;
}

Estudiante::~Estudiante() { // Destructor limpia la memoria en el Heap
    delete calificacion;
}