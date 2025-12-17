#include <iostream>

int main(){

    char op;
    double num1, num2, resultado;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el operador (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                resultado = num1 / num2;
            else
                std::cout << "Error: División por cero." << std::endl;
            break;
        default:
            std::cout << "Operador no válido." << std::endl;
    }

    if(op == '+' || op == '-' || op == '*' || (op == '/' && num2 != 0))
        std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}