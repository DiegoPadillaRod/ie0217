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




int main() { 
    std::string miarchivo;
    std::cout << "Ingrese el nombre del archivo .txt: ";
    std::cin >> miarchivo;
    abrirArchivo(miarchivo);
    return 0;
}
