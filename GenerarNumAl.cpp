#include <iostream>
#include <ctime>


int main(){
    srand(time(NULL)); // Inicializar numeros aleatorios
    
    int num = (rand() % 6) + 1;

    std::cout<<"Numero aleatorior generado: "<< num <<std::endl;
    return 0;
}
