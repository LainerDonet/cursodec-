#include <iostream>

int main(){

    //bucle while
    /*
    Sintaxis:
    while(condicion){
        //bloque de codigo a ejecutar mientras la condicion sea verdadera
    }
    */  
    int contador = 1; //inicializacion  
    while(contador <= 5){ //condicion
        std::cout << "Contador: " << contador << std::endl; //bloque de codigo
        contador++; //incremento
    }

    return 0;
}