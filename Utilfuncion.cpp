#include <iostream>
#include <cmath> // Incluir la biblioteca cmath para usar funciones matemáticas como std::max y std::min

int main(){

    double x = 3;
    double y = 4;
    double Maximo;
    double Minimo;
    double Potencia;
    double RaizCuadrada;
    double ValorAbsoluto = -5.5;
    double redonder = 5.1;
    double redonarHaciaArriba = 5.9;
    double redonarHaciaAbajo = 5.9;

    // Funciones utiles en matematicas
    Maximo = std::max(x,y);
    Minimo = std::min(x,y);
    Potencia = std::pow(x,y); // Elevar x a la potencia de y
    RaizCuadrada = std::sqrt(y); // Calcular la raíz cuadrada de y
    ValorAbsoluto = std::abs(ValorAbsoluto); // Calcular el valor absoluto
    redonder = std::round(redonder); // Redondear al entero más cercano
    redonarHaciaArriba = std::ceil(redonarHaciaArriba); // Redondear hacia arriba   
    redonarHaciaAbajo = std::floor(redonarHaciaAbajo); // Redondear hacia abajo


    std::cout<<"El maximo es: "<< Maximo<<std::endl;
    std::cout<<"El minimo es: "<< Minimo<<std::endl;
    std::cout<<"La potencia es: "<< Potencia<<std::endl;
    std::cout<<"La raiz cuadrada es: "<< RaizCuadrada<<std::endl;
    std::cout<<"El valor absoluto es: "<< ValorAbsoluto<<std::endl;
    std::cout<<"El redondeo es: "<< redonder<<std::endl;
    std::cout<<"Redondeo hacia arriba: "<< redonarHaciaArriba<<std::endl;
    std::cout<<"Redondeo hacia abajo: "<< redonarHaciaAbajo<<std::endl;

    return 0;
}
