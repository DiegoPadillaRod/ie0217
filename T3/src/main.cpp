#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <algorithm>
#include <regex> 
using namespace std;
//Determina con ayuda de la instruccion ispunt que es un signo de puntuacion y que no lo es.
bool Signos(char signos) {
    return std::ispunct(signos);
}

void abrirArchivo( const std::string &miarchivo) {
    std::ifstream archivo(miarchivo);

    if (!archivo) {
        std::cerr << " El archivo " << miarchivo << " no existe. ERROR!!!!" << std::endl;
        return;
    }

    if (archivo.peek() == std::ifstream::traits_type::eof()) {
        std::cerr << "El archivo " << miarchivo << " está vacío. ERROR!!!!" << std::endl;
        return;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        // minúsculas
        std::transform(linea.begin(), linea.end(), linea.begin(), ::tolower);
        // signos de puntuacion.
        linea.erase(std::remove_if(linea.begin(), linea.end(), Signos), linea.end());
        cout << linea << endl;
    }

    archivo.close();
}

const std::regex expresion_regular1(".*@.*\\.com.*"); // Todas la secciones de texto que contengan un @ y un .com

void Correos(const std::string &miarchivo) {
    std::ifstream archivo(miarchivo);
    std::string linea;
    bool correos_enc = false; // Un booleando para que logre identificar cuando dio con la expresion regular 

    if (!archivo) {
        std::cerr << "Algo salió MAL!!!!" << std::endl; // Archivo no abrio
        return;
    }

    while (std::getline(archivo, linea)) {
        if (std::regex_search(linea, expresion_regular1)) {
            correos_enc = true; // Confirma la expresion regular
            std::cout << linea << std::endl; // Imprime las coincidencias
        }
    }

    archivo.close();

    if (!correos_enc) {
        std::cout << "No hay correos que cumplan con la expresión regular." << std::endl;
    }
}



int main() { 
    std::string miarchivo;
    std::cout << "Ingrese el nombre del archivo .txt: ";
    std::cin >> miarchivo;

    std::cout << "El texto procesado es el siguiente" << std::endl;
    abrirArchivo(miarchivo);
    std::cout << "\n" << std::endl;
    std::cout << "Se encontraron los siguientes correos que terminan con '.com'." << std::endl;
    Correos(miarchivo);
    std::cout << "\n" << std::endl;
    return 0;
}
