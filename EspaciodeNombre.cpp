#include <iostream>

namespace primero {
    int valor = 10;
}

int main() {
    /*
    En C++ las variables no se le puede reasignar un valor de otro tipo de dato diferente al que fue declarado.
    */
   int valor = 20; // Declaración de una variable de tipo entero llamada valor
   std::cout<<"Valor = " << primero::valor << std::endl; // Imprime el valor de la variable valor local
    return 0;
}