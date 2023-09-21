#include "boats.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
int Coordenadas() {
    int grados;
    float minutos;
    char direccion;

    // Crear un objeto Ángulo usando el constructor
    cout << "Ingrese los grados: ";
    cin >> grados;

    cout << "Ingrese los minutos: ";
    cin >> minutos;

    cout << "Ingrese la direccion (N, S, E, W): ";
    cin >> direccion;

    Angulo miAngulo(grados, minutos, direccion);

    // Mostrar el ángulo
    cout << "El angulo ingresado es: ";
    miAngulo.mostrarAngulo();

    return 0;
}

int main()
{
    int opcion;
    bool repetir = true;
    do {
        system("cls");

        // Texto del menú que se verá cada vez que se inicie el programa
        // Menu Bonito
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Añadir un nuevo barco a la flota" << endl;
        cout << "\t2. Eliminar un barco de la flota" << endl;
        cout << "\t3. Mostrar la flota ordenada por latitud" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: "; // Preguntan al usuario
        cin >> opcion;

        int numero1, numero2;
        float resultado;
        switch (opcion) {
            case 1:
                printf("Seleccionaste: Añadir un nuevo barco.\n");
                int Coordenadas();
                break;

            case 2:
                printf("Seleccionaste: Eliminar un barco de la flota.\n");
                break;
            case 3:
                printf("Seleccionaste: Mostrar la flota ordenada por latitud\n");

            case 0:
                repetir = false;
                break;
        }
    } while (repetir);

    return 0;
}