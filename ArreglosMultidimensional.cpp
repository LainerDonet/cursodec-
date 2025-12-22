#include <iostream>

/*
Arreglos multidimensionales en C++
Un arreglo multidimensional es un arreglo que contiene otros arreglos como sus elementos.
El arreglo muntidimensional se declara especificando el número de elementos en cada dimensión.
Sintaxis:
tipo nombreArreglo[tamaño1][tamaño2]...[tamañon];
En el caso bidimensional, se puede puedo omitir el tamaño de la primera dimensión.
Ejemplo:
tipo nombreArreglo[][tamaño2];
*/

int main(){
    // Declaración e inicialización de un arreglo bidimensional (matriz) de 3x4
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int filas = sizeof(matriz) / sizeof(matriz[0]);            //Calcular el número de filas
    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);   //Calcular el número de columnas 

    // Acceso e impresión de los elementos del arreglo bidimensional
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}