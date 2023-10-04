#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <cctype> // Gracias a esta libreria podemos usar ispunct que detecta los signos de puntuacion
#include <algorithm> // Gracias a esta libreria podemos usar transform que nos ayudara a cmabiar nuestro texto a mins
#include <map>

typedef std::map<std::string, int> Palabras;

bool Signos(char c) {
    return std::ispunct(c);
}

void procesarArchivo(std::string &miarchivo, Palabras &words) { //Funcion que lee el archivo y que se encarga de procesarlo.
    std::ifstream archivo(miarchivo);

    if (!archivo) { // el archivo no existe
        std::cerr << "El archivo " << miarchivo << " no existe. ERROR!!!!" << std::endl;
        exit(1);
    }

    if (archivo.peek() == std::ifstream::traits_type::eof()) { // el archivo esta vacio
        std::cerr << "El archivo " << miarchivo << " está vacío. ERROR!!!!" << std::endl;
        exit(1);
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        // Convertir a minúsculas
        std::transform(linea.begin(), linea.end(), linea.begin(), ::tolower);
        
        // Eliminar signos de puntuación y procesar las palabras
        std::string palabra = "";
        for (char caracter : linea) {
            if (!Signos(caracter) && !std::isspace(caracter)) { // isspace verifica si hay un espacio en blanco o no
                palabra += caracter;
            } else if (!palabra.empty()) {
                ++words[palabra];
                palabra.clear();
            }
        }
        
        if (!palabra.empty()) { // verifica que la ultima palabra fue procesada.
            ++words[palabra];
        }
    }

    archivo.close();
}

const std::regex expresion_regular1(".*@.*\\.com.*");
void Correos(std::string miarchivo) {
    std::ifstream archivo(miarchivo);
    std::string linea;
    bool correos_enc = false;

    if (!archivo) {
        std::cout << "Algo salió MAL!!!!" << std::endl;
        return;
    }

    while (std::getline(archivo, linea)) {
        if (std::regex_search(linea, expresion_regular1)) {
            correos_enc = true;
            std::cout << linea << std::endl;
        }
    }

    archivo.close();

    if (!correos_enc) {
        std::cout << "No hay correos que cumplan con la expresión regular." << std::endl;
    }
}

const std::regex expresion_regular2("http[s]?://\\S+");

void URLs(std::string miarchivo) {
    std::ifstream archivo(miarchivo);
    std::string linea;
    bool urls = false;

    if (!archivo) {
        std::cout << "Algo salió MAL!!!!" << std::endl;
        return;
    }

    while (std::getline(archivo, linea)) {
        std::smatch match;
        if (std::regex_search(linea, match, expresion_regular2)) {
            urls = true;
            std::cout << match.str() << std::endl;
        }
    }

    archivo.close();

    if (!urls) {
        std::cout << "No hay URLs que cumplan con la expresión regular." << std::endl;
    }
}

int main() {
    std::string miarchivo;

    std::cout << "Por favor, ingrese el nombre del archivo .txt que desea analizar: ";
    std::cin >> miarchivo;

    Palabras frecuencia;
    procesarArchivo(miarchivo, frecuencia);

    std::cout << "\tPalabra\t\t" "|" "\tFrecuencia\t" << std::endl;
    std::cout << "\t----------------|-----------------" << std::endl;
    for (auto &pair : frecuencia) {
        if (pair.first.length() <= 7)
            std::cout << "\t" << pair.first << "\t\t|" << pair.second << std::endl;
        else 
            std::cout << "\t" << pair.first << "\t|" << pair.second << std::endl;
    }
    std::cout << "\n" << std::endl;
    std::cout << "Se encontraron los siguientes correos que terminan con '.com'." << std::endl;
    Correos(miarchivo);
    std::cout << "\n" << std::endl;
    std::cout << "Se encontraron los siguientes URLs que comienzan con 'http'." << std::endl;
    URLs(miarchivo);

    return 0;
}
