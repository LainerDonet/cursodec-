#include <iostream>

int main() {
    std::string frutas[] = {"Manzana", "Banana", "Cereza", "Dátil", "Elderberry"};

    int tamanoArreglo = sizeof(frutas) / sizeof(std::string);
    
    for(int i = 0; i < tamanoArreglo; i++) {
        std::cout << "Fruta en la posicion " << i << ": " << frutas[i] << std::endl;
    }

    return 0;
}