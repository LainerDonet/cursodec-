#include <iostream>

/* 
La Función fill llena un rango de elementos con un valor específico.
    Sintaxis:
    fill(begin, end, value);
    
    Parámetros:
    begin: Iterador que apunta al inicio del rango a llenar.
    end: Iterador que apunta al final del rango a llenar.
    value: Valor con el que se llenará el rango.
    
    Ejemplo:
    fill(arr, arr + n, valor);
*/

int main() {

    std::string comida[100];
    fill(comida, comida + 100, "Pizza");
    int n = sizeof(comida) / sizeof(comida[0]);
    for (int i = 0; i < n; i++) {
        std::cout << i <<" " << comida[i] << std::endl;
    }
    return 0;
}