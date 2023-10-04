/*
 * @file main.cpp
 * @authors Diego Padilla.
 * @date 03/10/2023
 */
#include "estudiante.hpp"
#include <iostream>

int main() { // Creando el main que permitira al usuario interactuar con el programa
    std::string nombre;
    float calificacion;

    std::cout << "Cual es el nombre del estudiante: ";
    std::cin >> nombre;

    std::cout << "Cual es la nota del estudiante: ";
    std::cin >> calificacion;
   
    if (calificacion >= 0 && calificacion <= 100) { // Regla que nos permite filtrar los valores que no estan entre 0 y 100
        Estudiante estudiante(nombre, calificacion);
        estudiante.MostrarInformacion();
    } else {
        std::cout << "La nota NO esta entre 0 y 100." << std::endl;
    }

    return 0;
}
