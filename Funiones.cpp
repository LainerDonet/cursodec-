#include <iostream>

void felizCumpleanos(std::string nombre) {
    std::cout << "Feliz cumpleaños, " << nombre << "!" << std::endl;
}
// Void no retorna ningún valor
double sumar(double a, double b);
int main() {
    std::string nombre = "Lainer Felipe";
    felizCumpleanos(nombre);
    double resultado = sumar(5.5, 3.3);
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}

double sumar(double a, double b) {
    return a + b;
}