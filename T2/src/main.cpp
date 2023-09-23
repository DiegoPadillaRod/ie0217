#include "angulo.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <fstream>
using namespace std;

int Coordenadas() 
{
    int grados;
    float minutos;
    char direccion;

    // Crear un objeto Ángulo usando el constructor}
    cout << "Ingrese las coordenadas del barco.\n"<< endl;
    cout << "Ingrese los grados: \n"<< endl;
    cin >> grados;

    cout << "Ingrese los minutos: "<< endl;
    cin >> minutos;

    cout << "Ingrese la direccion (N, S, E, W): "<< endl;
    cin >> direccion;
   
    
    Angulo angulonuevo(grados, minutos, direccion);

    // Mostrar el ángulo
    cout << "El angulo ingresado es: "<< endl; 
    angulonuevo.mostrarAngulo();
    return 0;
}

int main()
{
    int opcion;
    bool repetir = true;
    do {
        // Texto del menú que se verá cada vez que se inicie el programa
        // Menu Bonito
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Anadir un nuevo barco a la flota" << endl;
        cout << "\t2. Eliminar un barco de la flota" << endl;
        cout << "\t3. Mostrar la flota ordenada por latitud" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: "; // Preguntan al usuario
        cin >> opcion;
        switch (opcion) {
            case 1:
                printf("Seleccionaste: Anadir un nuevo barco.\n");
                Coordenadas();
                system("pause");
                break;
            case 2:
                printf("Seleccionaste: Eliminar un barco de la flota.\n");
                break;
            case 3:
                printf("Seleccionaste: Mostrar la flota ordenada por latitud\n");
                break;
            case 0:
                repetir = false;
                break;
        }
    } while (repetir);

    return 0;
}
