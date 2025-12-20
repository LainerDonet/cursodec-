#include <iostream>

int main(){
    std::string automovil[]={"BMW","Audi","Ford","Mazda"};
    automovil[2]="Chevrolet"; // Modifica el valor en la posicion 2
    std::cout << "El automovil en la posicion 2 es: " << automovil[2] << std::endl;

    int numeros[3]; // Declaracion de un arreglo es necesario especificar su tamano
    numeros[0]=10;
    numeros[1]=20;
    std::cout << "El valor en la posicion 0 es: " << numeros[0] << std::endl;
    return 0;
}