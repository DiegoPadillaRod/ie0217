#include "Flota.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{
    Flota barco; 
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
        cout << "\t0. SALIR!!" << endl;

        cout << "\n\tIngrese una opcion: "; // Preguntan al usuario
        cin >> opcion;
        switch (opcion) {
            case 1:
                printf("Seleccionaste: Anadir un nuevo barco.\n");
                barco.IngresarBarco();
                system("pause");
                break;
            case 2:
                int NumSerie;
                printf("Seleccionaste: Eliminar un barco de la flota.\n");
                cout << "Digite el Numero de Serie del Barco que Quiere Eliminar:" << endl;
                cin >> NumSerie;
                if (barco.BorrarBarco(NumSerie)) {
                    cout << "Se ha borrado Corectamente" << endl;
                    
                }
                 else {
                    cout << "Se ha el barco borrado Corectamente!!!!" << endl;
                 }
                system("pause");
                break;
            case 3:
                printf("Seleccionaste: Mostrar la flota ordenada por latitud\n");
                barco.OrdenarFlota();
                system("pause");
                break;
            case 0:
                repetir = false;
                break;
        }
    } while (repetir);

    return 0;
}