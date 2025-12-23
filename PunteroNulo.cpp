#include <iostream>
// Valor nulo: un valor especial que significa que algo no tiene valor 
// nulptr : El la palabra clave que representa a un puntero nulo.

int main()
{
    int *puntero = nullptr;
    int x = 123;

    puntero = &x;

    std::cout<< (puntero == nullptr ? "La direccion no se asigno": "La dirección fue asignada!")<<"\n";
    std::cout<<*puntero<<std::endl;
    return 0;
}