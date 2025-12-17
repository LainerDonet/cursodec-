#include <iostream>
#include <cmath>

int main() {
    double ladoA, ladoB;

    std::cout << "Ingrese la longitud del lado A: ";
    std::cin >> ladoA;

    std::cout << "Ingrese la longitud del lado B: ";
    std::cin >> ladoB;

    double hipotenusa = std::sqrt(std::pow(ladoA, 2) + std::pow(ladoB, 2));

    std::cout << "La longitud de la hipotenusa es: " << hipotenusa << std::endl;

    return 0;
}