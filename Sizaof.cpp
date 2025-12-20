#include <iostream>

/*
En C++ cuanddo se trata de string hay que usar comillas dobles "" para definir una cadena de texto, mientras que para un solo caracter se usan comillas simples ''.

El operador sizeof nos permite conocer el tamano en bytes de un tipo de dato o de una variable.
*/

int main(){

    int entero=34;
    char caracter='A';
    double decimal=12.56;
    float flotante=5.89f;
    std::string texto="Hola Mundo";
    bool booleano=true;
    char abecedario[]={'a','b','c','d','e','f','g'};

    //Truco util para conocer el tamano de un arreglo es dividir el tamano total del arreglo entre el tamano de un elemento del arreglo

    int tamanoArreglo= sizeof(abecedario) / sizeof(abecedario[0]);
    int tamanoArreglo2= sizeof(abecedario) / sizeof(char);
    std::cout << "El tamano del arreglo abecedario es: " << tamanoArreglo << " elementos" << std::endl;


    std::cout << "El tamano de un entero es: " << sizeof(entero) << " bytes" << std::endl;
    std::cout << "El tamano de un caracter es: " << sizeof(caracter) << " bytes" << std::endl;
    std::cout << "El tamano de un decimal es: " << sizeof(decimal) << " bytes" << std::endl;
    std::cout << "El tamano de un flotante es: " << sizeof(flotante) << " bytes" << std::endl;
    std::cout << "El tamano de un texto es: " << sizeof(texto) << " bytes" << std::endl;
    std::cout << "El tamano de un booleano es: " << sizeof(booleano) << " bytes" << std::endl;
    std::cout << "El tamano del arreglo abecedario es: " << sizeof(abecedario) << " bytes" << std::endl;

    return 0;
}