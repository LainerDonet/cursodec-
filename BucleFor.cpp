#include <iostream>
int main() {

    // Ejemplo de bucle For en C++
    /*
    Sintaxis:
    for (inicializacion; condicion; incremento/decremento) {
        // bloque de codigo a ejecutar mientras la condicion sea verdadera
    }
    */
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteracion numero: " << i + 1 << std::endl;
    }
    // Ejemplo de bucle For que salte iteraciones
    for (int i = 0; i < 10; i += 2) {
        std::cout << "Numero par: " << i << std::endl;
    }
    //Ejemplo de bucle For que cuente hacia atras
    for (int i = 5; i > 0; i--) {
        std::cout << "Cuenta regresiva: " << i << std::endl;
    }
    return 0;
       
}