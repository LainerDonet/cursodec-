#include <iostream>

/*
    Los conceptos de herencia en C++ permiten crear nuevas clases basadas en clases existentes.
    La clase que hereda se llama clase derivada, y la clase de la cual se hereda se llama clase base.
    La herencia permite reutilizar código y establecer una relación "es un tipo de" entre clases.
*/

class Animal {
    public:
        bool vivo = true;
        void comer(){
            std::cout<<"comiendo \n";
        }
};

class Perro : public Animal{
    public:
    void ladrar(){
        std::cout << "Gua Gua \n";
    }
};

class Gato : public Animal{
    public:
    void maullar(){
        std::cout << "Miau Miau \n";
    }
};

int main(){

    Perro perro1;
    Gato gato1;

    std::cout << (perro1.vivo ? "El perro esta vivo" : "El esta muerto") << std::endl;
    perro1.comer();
    perro1.ladrar();
    gato1.maullar();

    return 0;
}
