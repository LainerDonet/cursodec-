#include <iostream>

int main() {
    const double PI = 3.14159; // Declaración de una constante de tipo double por convención se usan mayúsculas para las constantes
    double radio = 5.0; // Declaración de una variable de tipo double
    double circunferencia = 2 * PI * radio; // Cálculo de la circunferencia
    std::cout << "La circunferencia de un círculo con radio " << radio << " cm es " << circunferencia << " cm" << std::endl;

    return 0;
}