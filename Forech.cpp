#include <iostream>

// El Bucle foreach en C++17 tiene la siguiente sintaxis:
// for (declaración : colección) {
//     // cuerpo del bucle
// }
/*
En el bucle forech solo se puede usar en un setido
Nota sobre los arreglos: 
Solo puede ser de un solo tipo, no se pueden mezclar tipos en un mismo arreglo.
*/

int main(){

    std::string estudientes[] = {"Juan", "Ana", "Luis", "Maria"};
    for (const std::string estudiante : estudientes) {
        std::cout << "Estudiante: " << estudiante << std::endl;
    }

    return 0;
}