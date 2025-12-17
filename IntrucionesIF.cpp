#include <iostream>

//Las intrucciones if permiten ejecutar bloques de codigo dependiendo de una condicion. Cuando la condicion es verdadera, se ejecuta el bloque de codigo dentro del if. Si la condicion es falsa, se puede usar else para ejecutar un bloque alternativo. 

int main() {
    int edad;

    std::cout << "Ingrese la edad: ";
    std::cin >> edad;

    // Checkea si tienes la edad suficiente para entrar a la universidad
    if(edad >= 100){
        std::cout << "Demasiado mayor para ingresar a la universidad." << std::endl;
    }else if (edad >= 18) {
        std::cout <<"Bienvenido a la universidad." << std::endl;
    }else if(edad <= 0){
        std::cout << "Edad invalida." << std::endl;
    } else {
        std::cout << "No puedes entrar a la universidad." << std::endl;
    }

    return 0;
}