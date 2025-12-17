#include <iostream>

int main(){
    double temp, result;
    int op;

    std::cout<<"##########CONVERTIR TEMPERATURA###########"<<std::endl;
    std::cout<< "Elige (1) Para convertir de C a F"<<std::endl;
    std::cout<< "Elige (2) Para convertir de F a C"<<std::endl;
    std::cin>>op;
    
    switch(op)
    {
        case 1:
            std::cout<<"Ingresa Temperatura en Celsius"<<std::endl;
            std::cin>>temp;
            result = 1.8 * temp + 32;
            std::cout<<"La Temperatura en grados Fahrenheit es: "<< result<< " F"<<std::endl; 
            break;
        case 2:
            std::cout<<"Ingresa Temperatura en Fahrenheit"<<std::endl;
            std::cin>>temp;
            result = (temp - 32) * 5/9;
            std::cout<<"La temperatura en grados Celsius es: "<< result << " C"<<std::endl;
            break;
        default:
            std::cout<<"Escoge una opcion valida 1 o 2"<<std::endl;
            break;
    }
    
    
    return 0;
}
