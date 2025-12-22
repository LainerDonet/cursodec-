#include <iostream>
void cambiarValor (std::string &X, std::string &Y);
       
int main(){
    std::string X = "Cafe";
    std::string Y = "Agua";

    cambiarValor(X, Y);

    std::cout<< "X: " << X <<std::endl; 
    std::cout<< "Y: " << Y <<std::endl; 
  return 0;
}

void cambiarValor(std::string &X, std::string &Y){

    std::string temp;
    temp = X;
    X = Y;
    Y = temp; 
}