#include <iostream>

int main(){

    // Ejemplo de bucle Do While en C++
    /*
    Sintaxis:
    do {
        // bloque de codigo a ejecutar al menos una vez y mientras la condicion sea verdadera
    } while(condicion);
    */  
    int numeroPositivo;

    do {
        std::cout << "Ingrese un numero positivo: ";
        std::cin >> numeroPositivo;
    } while(numeroPositivo < 0);
    return 0;
}