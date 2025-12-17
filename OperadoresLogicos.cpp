#include <iostream>

// && => compueba si ambas condiciones son verdaderas
// || => compueba si al menos una de las condiciones es verdadera
// !  => niega el valor de una condicion

int main(){

    bool a = true;
    bool b = false;

    std::cout << "a && b = " << (a && b) << std::endl;
    std::cout << "a || b = " << (a || b) << std::endl;
    std::cout << "!a = " << !a << std::endl;

    return 0;
}