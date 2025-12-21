#include <iostream>

int main(){

    std::string comida[5];
    int n = sizeof(comida) / sizeof(comida[0]);
    for(int i = 0; i < n; i++){
        std::cout << "Ingresa el nombre de una comida: ";
        std::getline(std::cin, comida[i]);  
    }
    for(int i = 0; i < n; i++){
        std::cout << i <<" " << comida[i] << std::endl;
    }
    return 0;
}