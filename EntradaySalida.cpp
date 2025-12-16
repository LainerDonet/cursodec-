#include <iostream>

// cout << es la abreviatura de "character output" (salida de caracteres)(oprador de inserción <<)
// cin >> es la abreviatura de "character input" (entrada de caracteres)(operador de extracción >>)

int main(){

    std::string nombre;
    int edad;

    std::cout << "Ingrese su edad: "; // Solicitamos al usuario que ingrese su edad
    std::cin >> edad; // Leemos la edad ingresada por el usuario y la almacenamos en la variable 'edad'
    std::cin.ignore(); // Limpiamos el buffer de entrada para evitar problemas al leer la siguiente línea38
    std::cout << "Ingrese su nombre completo: "; // Usamos cout para mostrar un mensaje en la consola
    std::getline(std::cin, nombre); // Usamos cin para leer la entrada del usuario y almacenarla en la variable 'nombre'

    std::cout << "Hola, " << nombre << "! Bienvenido al programa." << std::endl; // Mostramos un saludo personalizado
    std::cout << "Tienes " << edad << " a" << char(100) <<"os." << std::endl; // Mostramos la edad del usuario
    return 0;
}

