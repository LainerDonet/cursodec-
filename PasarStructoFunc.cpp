#include <iostream>

struct Automovil
{
    std::string marca;
    std::string modelo;
    int anio;
    double precio;
};

void mostrarAutomovil(const Automovil& auto1)
{
    std::cout << "Marca: " << auto1.marca << "\n";
    std::cout << "Modelo: " << auto1.modelo << "\n";
    std::cout << "Año: " << auto1.anio << "\n";
    std::cout << "Precio: $" << auto1.precio << "\n";
}
void pintarAutomovil(const Automovil& auto1 , std::string color)
{
    std::cout << "Pintando el automovil " << auto1.marca << " " << auto1.modelo << " de color " << color << "." << std::endl;
}


int main()
{
    Automovil auto1;
    auto1.marca = "Toyota";
    auto1.modelo = "Corolla";
    auto1.anio = 2020;
    auto1.precio = 20000.50;

    mostrarAutomovil(auto1);
    pintarAutomovil(auto1, "Rojo");
  return 0;
}