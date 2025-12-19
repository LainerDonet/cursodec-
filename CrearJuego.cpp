#include <iostream>
#include <ctime>

int main(){

    int num, intentos;
    int adivinar = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    std::cout << "Adivina el Numero\n";

    do {

        std::cout <<"Ingrese un numero entre 1 y 100: ";
        std::cin >> adivinar;
        intentos++;

        if(adivinar > num){
            std::cout << "mas bajo\n";
        }else if(adivinar < num){
            std::cout << "mas arriba\n";
        }else{
            std::cout << "CORRECTO! intentos: " <<intentos<<"\n";
        }

    }while(num != adivinar);



    return 0;
}

