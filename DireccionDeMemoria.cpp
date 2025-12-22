#include <iostream>

int main(){
    std::string nombre = "Lainer";
    int numero = 31;
    bool isHere = true;
    

    std::cout << nombre <<std::endl;
    std::cout << numero <<std::endl;
    std::cout << (isHere ? "Esta aqui" : "Se fue") <<std::endl;

    //Ver las direciones de memorias 
    std::cout << "Direccion de memoria de la varianle nombre: "<< &nombre <<std::endl;
    std::cout << "Direccion de memoria de la varianle numero: "<< &numero <<std::endl;
    std::cout << "Direccion de memoria de la varianle isHere: " << &isHere  <<std::endl;
    
    /*
    Las direciones de memorias en C++ se dan en hexadisimal pero se pueden convertir adecimal para ver que tan serapadas estan teniendo en cuenta que hay variables ocupan mas espacio que otras.
    */

    return 0;
}
