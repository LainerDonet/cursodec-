#include <iostream>

/*
Bucle Anidado
Este programa demuestra el uso de bucles anidados en C++.
El programa cuenta tres veces hasta 7
*/

int main() {
    // Bucle externo que se repite 3 veces
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Cuenta " << i << ":\n";
        
        // Bucle interno que cuenta de 1 a 7
        for (int j = 1; j <= 7; ++j) {
            std::cout << j << " ";
        }
        
        std::cout << "\n"; // Nueva línea después de cada cuenta
    }
    
    
    return 0;
}