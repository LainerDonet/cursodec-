#include <iostream>

int numero = 100; // Variable global
void demostrarAmbitos();


int main() {
    // Variable local en el ámbito de la función main
    int numero = 10;
    std::cout << "Número en main: " << numero << std::endl;
    demostrarAmbitos();
    std::cout << "Variable global: " << ::numero << std::endl;

    {
        // Nuevo ámbito
        int numero = 20; // Esta variable 'numero' es diferente a la de main
        std::cout << "Número en el nuevo ámbito: " << numero << std::endl;
    }

    // Volvemos al ámbito de main
    std::cout << "Número en main después del nuevo ámbito: " << numero << std::endl;

    return 0;
}   

// Este funcion demuestra el concepto de ámbitos (scopes) en C++.

void demostrarAmbitos() {
    int valor = 5; // Variable local en el ámbito de la función
    std::cout << "Valor en el ámbito de la función: " << valor << std::endl;
}