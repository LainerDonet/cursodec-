#include <iostream>

// Las palabras reservadas 'break' y 'continue' se utilizan para controlar el flujo de los bucles en C++.
/*
break: Se utiliza para salir inmediatamente de un bucle (for, while, do-while o switch).
continue: Se utiliza para saltar a la siguiente iteración del bucle, omitiendo el resto del código en la iteración actual.
*/
int main() {
    // Ejemplo de uso de 'break' en un bucle for
    std::cout << "Ejemplo de break en un bucle for:" << std::endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Sale del bucle cuando i es igual a 5
        }
        std::cout << i << " ";
    }
    std::cout << std::endl; 
    // Ejemplo de uso de 'continue' en un bucle for
    std::cout << "Ejemplo de continue en un bucle for:" << std::endl;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Salta a la siguiente iteración cuando i es par
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}