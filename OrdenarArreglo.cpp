#include <iostream>

/*
Algoritmo de ordenamiento de un arreglo utilizando el método de burbuja. El algoritmo compara elementos adyacentes y los intercambia si están en el orden incorrecto. Este proceso se repite hasta que el arreglo esté completamente ordenado.
*/
void clasificar(int arr[], int n);
// La funcion void no retorna ningun valor pero el arreglo se ordena en su lugar. por
// eso no es necesario retornar el arreglo.

int main(){

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    clasificar(arr, n);

    for(int i=0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void clasificar(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Intercambiar arr[j] y arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}