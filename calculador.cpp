#include <iostream>

int main(){
    
    int num1;
    int num2;
    int result;
    int oper;
    //std::string oper;

    std::cout<<"Introduce un numero: ";
    std::cin>> num1;
    std::cout<<"Introduce otro numero: ";
    std::cin>>num2;
    std::cout<<"Escoge la operacion a realizar: suma(1),resta(2),multi(3),divi(4): ";
    std::cin>> oper;
    //std::cin.ignore();
    if(oper == 1 ){
        result = num1 + num2;
        std::cout<<"El resultado de la suma es: " << result <<std::endl;        
    }else if(oper == 2 ){
        result = num1 - num2;
        std::cout<<"EL resultado de la resta es: "<< result <<std::endl;
    }else if(oper == 3){
        result = num1 * num2;
        std::cout<<"El resultado de la multiplicacion es: " << result <<std::endl;
    }else if(oper == 4){
        result = num1 / num2;
        std::cout<<"El resultado de la division es: "<< result <<std::endl;
    }else{
        std::cout<<"Escoge un operacion valida"<<std::endl;
    }

    return 0;
}
