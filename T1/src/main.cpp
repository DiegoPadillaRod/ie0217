#include "fun.h"
#include <iostream>
#include <vector>
#include <stdio.h>
#include <fstream>
#include <cstdlib>
using namespace std;

void respuestaAPregunta(vector <QA> vec){
    system("cls");
    string PalOPreg;
    cout << "Por favor, introduzca una pregunta o palabra clave:" ;
    cin >> PalOPreg;
    bool bandera = false;
    for(QA qa : vec){
        if(qa.match(PalOPreg)){
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
            cout << "\t0. SALIR!!!!!!!" << endl;
            cout << "\n\tIngrese una opcion: ";
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
int main()
{
    int opcion;
    bool repetir = true;
    vector <QA> vec;
    RecuperaPreguntasYRespuestas(vec);
    do {
        system("cls");

        // Texto del menú que se verá cada vez
        cout << "\n\n\t\t\tMenu de Opciones" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Mostrar todas las definiciones almacenadas." << endl;
        cout << "\t2. Hacer una pregunta." << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        int numero1, numero2;
        float resultado;
        switch (opcion) {
            case 1:
                printf("Seleccionaste: Mostrar todas las definiciones almacenadas.\n");
                preguntas(vec);
                break;

            case 2:
                respuestaAPregunta(vec);
                break;

            case 0:
                repetir = false;
                break;
        }
    } while (repetir);

    return 0;
}