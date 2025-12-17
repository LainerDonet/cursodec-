#include <iostream>

/*
Operador ternario en C++
?:= operador condicional ternario es un reemplazo de if 
Sintaxis:
condicion ? expresion1 : expresion2;
Si la condicion es verdadera, se evalua y retorna expresion1, si es falsa, se evalua y retorna expresion2.
*/

int main() {
    int numero;

    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    // Usando el operador ternario para determinar si el número es par o impar
    std::string resultado = (numero % 2 == 0) ? "El número es par." : "El número es impar.";

    std::cout << resultado << std::endl;

    return 0;
}