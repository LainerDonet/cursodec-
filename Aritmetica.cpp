#include <iostream>

int main() {
    // Declaración y asignación de variables enteras
    int a = 15;
    int b = 4;

    // Operaciones aritméticas básicas
    int suma = a + b;            // Suma
    int resta = a - b;          // Resta
    int multiplicacion = a * b; // Multiplicación
    int division = a / b;       // División entera
    int modulo = a % b;         // Módulo
    a += 3;
    int incremento = ++a;        // Incremento
    int decremento = --a;        // Decremento        
    // int a -= 1;       
    // Mostrar resultados
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;
    std::cout << "División: " << division << std::endl;
    std::cout << "Módulo: " << modulo << std::endl;
    std::cout << "Incremento: " << incremento << std::endl;
    std::cout << "Decremento: " << decremento << std::endl;
   

    // Operaciones con números de punto flotante
    double x = 5.5;
    double y = 2.0;

    double sumaF = x + y;            // Suma
    double restaF = x - y;          // Resta
    double multiplicacionF = x * y; // Multiplicación
    double divisionF = x / y;       // División
    int resto = a % b;         // Módulo

    // En C++ las operaciones aritmeticas combinadas respetan la jerarquia de operaciones

    float combinadas = 3.2 + 5 * 2 - 8 / 4; // Resultado es 3 + (5*2) - (8/4) = 3 + 10 - 2 = 11


    // Mostrar resultados de punto flotante
    std::cout << "Suma (float): " << sumaF << std::endl;
    std::cout << "Resta (float): " << restaF << std::endl;
    std::cout << "Multiplicación (float): " << multiplicacionF << std::endl;
    std::cout << "División (float): " << divisionF << std::endl;
    std::cout << "Resto: " << resto << std::endl;
    std::cout << "Operaciones combinadas: " << combinadas << std::endl;

    return 0;
}