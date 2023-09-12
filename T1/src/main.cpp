#include "header.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

// Plantilla de un Menú de Opciones

void preguntas()
{
    int seleccion;
    bool completo = true;
    
    do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\n\t\t\tPreguntas Disponibles" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Cual es la principal diferencia entre C y C++?" << endl;
        cout << "\t2. Cual es la diferencia entre un interprete y un compilador?" << endl;
        cout << "\t3. Que es el namespace y para qué se utiliza?" << endl;
        cout << "\t4. Cual es la diferencia entre declarar e inicializar una variable?" << endl;
        cout << "\t5. Cual es la diferencia entre un break y un continue en los bucles de C++?" << endl;
        cout << "\t6. Que es el polimorfismo en clases?" << endl;
        cout << "\t7. Que hace la sentencia extern?" << endl;
        cout << "\t8. Que son las palabras reservadas?" << endl;
        cout << "\t9. Que es un puntero y como se utiliza? Explique con un ejemplo de la vida real." << endl;
        cout << "\t10. Que es una funcion prototipo?" << endl;
        cout << "\t11. Que es un puntero nullptr?" << endl;
        cout << "\t12. Cual es la diferencia entre pasar parámetros por valor, por referencia y por puntero?" << endl;
        cout << "\t13. Que es un memory leak?" << endl;
        cout << "\t14. Para que se utiliza la directiva #ifndef?" << endl;
        cout << "\t15. Que es el type casting?" << endl;
        cout << "\t16. Cual es la diferencia entre un arreglo y una lista en C++?" << endl;
        cout << "\t17. Que es el puntero this en C++?" << endl;
        cout << "\t18. Que es un objeto y qué es instanciar?" << endl;
        cout << "\t19. Que es el constructor y el destructor en una clase?" << endl;
        cout << "\t20. Que es la sobrecarga de operadores en C++ y como se utiliza?" << endl;
        cout << "\t21. Que es memoria dinamica?" << endl;
        cout << "\t22. Que es memoria estatica?" << endl;
        cout << "\t23. Que es una biblioteca dinamica?" << endl;
        cout << "\t24. Que es una biblioteca estatica?" << endl;
        cout << "\t25. Que es un systemcall?" << endl;
        cout << "\t26. Que es un callback?" << endl;
        cout << "\t26. Que es un callback?" << endl;
        cout << "\t27. SPI?" << endl;
        cout << "\t28. I2C?" << endl;
        cout << "\t29. Que es un programa deamon?" << endl;
        cout << "\t30. Que es un cross-compiler?" << endl;
        cout << "\t31. Que es un proceso?" << endl;
        cout << "\t32. Que es un thread?" << endl;
        cout << "\t0. SALIR!!!!!!!" << endl;

        
        cout << "\n\tIngrese una opcion: ";
        cin >> seleccion;
        
        int numero1, numero2;
		float resultado;
        switch (seleccion) {
            case 1:
                cout << "\nCual es la principal diferencia entre C y C++?\n";
                cout << "Respuesta: ";
                cout << "\nLa principal diferencia entre C y C++ es que C++ es una extensión de C que admite programación orientada a objetos, mientras que C se centra en la programación procedural.";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
                
            case 2:
                cout << "\n¿Cuál es la diferencia entre un intérprete y un compilador?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
                
            case 3:
                cout << "\n¿Qué es el namespace y para qué se utiliza?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
                
            case 4:
                cout << "\n¿Cuál es la diferencia entre declarar e inicializar una variable?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 5:
                cout << "\n¿Cuál es la diferencia entre un break y un continue en los bucles de C++?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 6:
                cout << "\n¿Qué es el polimorfismo en clases?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 7:
                cout << "\n¿Qué hace la sentencia extern?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 8:
                cout << "\n¿Qué son las palabras reservadas?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 9:
                cout << "\n¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 10:
                cout << "\n¿Qué es una función prototipo?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 11:
                cout << "\n¿Qué es un puntero nullptr?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 12:
                cout << "\n¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 13:
                cout << "\n¿Qué es un memory leak?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 14:
                cout << "\n¿Para qué se utiliza la directiva #ifndef?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 15:
                cout << "\n¿Qué es el type casting?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 16:
                cout << "\n¿Cuál es la diferencia entre un arreglo y una lista en C++?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 17:
                cout << "\n¿Qué es el puntero this en C++?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 18:
                cout << "\n¿Qué es un objeto y qué es instanciar?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 19:
                cout << "\n¿Qué es el constructor y el destructor en una clase?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 20:
                cout << "\n¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 21:
                cout << "\n¿Qué es memoria dinámica?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 22:
                cout << "\n¿Qué es memoria estática?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 23:
                cout << "\n¿Qué es una biblioteca dinámica?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 24:
                cout << "\n¿Qué es una biblioteca estática?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 25:
                cout << "\n¿Qué es un systemcall?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 26:
                cout << "\n¿Qué es un callback?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 27:
                cout << "\n¿SPI?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 28:
                cout << "\n¿I2C?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 29:
                cout << "\n¿Qué es un programa deamon?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 30:
                cout << "\n¿Qué es un cross-compiler?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 31:
                cout << "\n¿Qué es un proceso?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 32:
                cout << "\n¿Qué es un thread?\n";
                cout << "Respuesta: ";
                cout << "\n";
                cout << "\nPresione cualquier tecla para regresar";
                system("pause>nul");
                break;
            case 0:
                completo = false;
                break;
        }        
    } while (completo);
}

vector<QA> coincidencias(){
    ifstream archivo("miarchivo.txt");
    vector <QA> vec;
    // Verifica si el archivo se abrió correctamente
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
        return vec;
    }

    // Lee y muestra el contenido del archivo línea por línea
    string linea;
    while (std::getline(archivo, linea)) {
        cout << linea << endl;
        QA pregunta ("",linea);
        vec.push_back(pregunta);
    }

    // Cierra el archivo
    archivo.close();
    return vec;
}
int main()
{
    int opcion;
    bool repetir = true;
    vector <QA> vec;
    
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
                preguntas();
                break;
                
            case 2:
                vec = coincidencias();
                system("pause>nul");
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}