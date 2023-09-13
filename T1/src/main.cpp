/*
 * @file main.cpp
 * @authors Diego Padilla.
 * @date 13/9/2023
 */
#include "fun.h"
#include <iostream>
#include <vector> // Para acceder a la informacion del .txt
#include <stdio.h>
#include <fstream>
#include <cstdlib>
using namespace std; // Nos permite usar cout

// Funcion encargada de preguntar al usuario
void respuestaAPregunta(vector <QA> vec){
    system("cls");
    string Preg;
    cout << "Por favor, introduzca una pregunta o palabra clave:" ; 
    cin >> Preg;
    bool bandera = false;
    for(QA qa : vec){
        if(qa.match(Preg)){
            cout<<"Respuesta/ "<< qa.respuesta << endl;
            bandera = true;
            system("pause");
            break;
        }
    }
    if(!bandera){
        cout<<"No se encontraron matches con la pregunta o palabra."<< endl;
    }
    system("pause");

}
// Funcion que se encarga de mostrar la informacion de cada pregunta
void preguntas(vector <QA> vec)
{
    int seleccion;
    bool completo = true;
    do {
        system("cls");
        cout << "--------Preguntas Disponibles----------" << endl;
        cout << "---------------------------------------" << endl;
        if(!vec.empty()){
            for(QA Qa : vec){
                cout<<Qa.pregunta<<endl;
            }
            cout << "\t0. SALIR" << endl;
            cout << "\n\tQue quieres saber: ";
            cin >> seleccion;
            if (seleccion != 0){
                cout<< vec.at(seleccion-1).toString()<<endl;
                system("pause");
            }
            else{
                completo = false;
            }
        }
    } while (completo);
}

// Funcion encargada de extraer la informacion almacenada en el .txt
void RecuperaPreguntasYRespuestas(vector <QA>& vec){
    ifstream archivo("./miarchivo.txt");

    // Verifica si el archivo se abrió correctamente
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
    }
    // Lee y muestra el contenido del archivo línea por línea
    string question;
    string answer;
    while (!archivo.eof()) {
        std::getline(archivo, question, ',');
        std::getline(archivo, answer, '\n');
        QA pregunta (question,answer);
        vec.push_back(pregunta);
    }
    archivo.close();
}
// Menu principal del programa
int main()
{
    int opcion;
    bool repetir = true;
    vector <QA> vec;
    RecuperaPreguntasYRespuestas(vec);
    do {
        system("cls");

        // Texto del menú que se verá cada vez que se inicie el programa
        // Menu Bonito
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Mostrar todas las definiciones almacenadas." << endl;
        cout << "\t2. Hacer una pregunta." << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: "; // Preguntan al usuario
        cin >> opcion;

        int numero1, numero2;
        float resultado;
        switch (opcion) {
            case 1:
                printf("Seleccionaste: Mostrar todas las definiciones almacenadas.\n");
                preguntas(vec);
                break;

            case 2:
                printf("Seleccionaste: Hacer una pregunta.\n");
                respuestaAPregunta(vec);
                break;

            case 0:
                repetir = false;
                break;
        }
    } while (repetir);

    return 0;
}