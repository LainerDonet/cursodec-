#include <iostream>
/*
    Constructores sobrecargados
    Multiple constructores con el mismo nombre y diferentes argumentos.

*/

class Pizza{
    public:
    std::string ingrediente1;
    std::string ingrediente2;
    Pizza(){
        std::cout<<"Esta pizza solo tiene queso, tomate y los ingredientes basicos \n";
    }
    Pizza(std::string ingrediente1){
        this->ingrediente1 = ingrediente1;
    };
    Pizza(std::string ingrediente1, std::string ingrediente2){
        this->ingrediente1 = ingrediente1;
        this->ingrediente2 = ingrediente2;
    };
};

int main(){

    Pizza pizza1("Peperoni");
    Pizza pizza2("Peperoni", "jamon");
    Pizza pizza3; // No se necesitó los () para que se ejecutara el constructor 

    std::cout<<"Esta Pizza contiene "<<pizza1.ingrediente1<<'\n';
    std::cout<<"La Pizza 2 es de "<< pizza2.ingrediente1 << " y "<< pizza2.ingrediente2<<'\n';

    return 0;
}