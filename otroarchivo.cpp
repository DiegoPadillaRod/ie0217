// Hola mundo
#include <iostream>

int main() {
    std::cout << "Hello World, desde otro archivo!\n";

    int var1 = 45;
    int var2 = 2;
    int var3 = 3;

    switch (var1) { // Cases
        case 1:
            std::cout << "Case 1!\n";
            break;
        case 2:
        case 3:
            std::cout << "Case 3!\n";
            break;
        
        default:
            std::cout << "Case Busta Rhyms!\n";
            break;
        }

        // Void, No tiene retorno
        // i++, se actualiza el valor
        // double, decimal

   return 0; 
}

