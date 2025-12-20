#include <iostream>

/*
Aunque a una Funcion se le pueden pasar arreglos como parametros, el arreglo se degrada a un puntero. Por lo tanto, no se puede determinar el tamaño del arreglo dentro de la funcion a menos que se pase como un parametro adicional.
*/
double calSuma(double arr[], int size);
int main(){

    double precios[] = {19.99, 29.99, 4.99, 49.99};
    int tam = sizeof(precios) / sizeof(precios[0]);
    double sumaTotal = calSuma(precios, tam); // Se puede padar el arreglo sin corchetes
    std::cout << "La suma total de los precios es: " << sumaTotal << std::endl;
    return 0;
}

double calSuma(double arr[], int size) {
    double suma = 0.0;
    for (int i = 0; i < size; ++i) {
        suma += arr[i];
    }
    return suma;
}