#include <iostream>

int main()
{
    // Declaración e inicialización de un puntero
    std::string nombre = "Juan";
    std::string* punteroNombre = &nombre; // El puntero almacena la dirección de memoria de la variable 'nombre'
    std::cout << "Valor de nombre: " << nombre << std::endl;
    std::cout << "Dirección de memoria de nombre: " << &nombre << std::endl;
    std::cout << "Valor del puntero punteroNombre: " << punteroNombre << std::endl;
    std::cout << "Valor apuntado por punteroNombre: " << *punteroNombre << std::endl;
  return 0;
}