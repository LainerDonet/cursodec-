#include <iostream>

enum DiaSemana {
    Lunes = 1,
    Martes = 2,
    Miercoles = 3,
    Jueves = 4,
    Viernes = 5,
    Sabado = 6,
    Domingo = 7
};

int main()
{
    DiaSemana hoy = Miercoles;

    switch (hoy) {
        case Lunes:
            std::cout << "Hoy es Lunes." << std::endl;
            break;
        case Martes:
            std::cout << "Hoy es Martes." << std::endl;
            break;
        case Miercoles:
            std::cout << "Hoy es Miércoles." << std::endl;
            break;
        case Jueves:
            std::cout << "Hoy es Jueves." << std::endl;
            break;
        case Viernes:
            std::cout << "Hoy es Viernes." << std::endl;
            break;
        case Sabado:
            std::cout << "Hoy es Sábado." << std::endl;
            break;
        case Domingo:
            std::cout << "Hoy es Domingo." << std::endl;
            break;
        default:
            std::cout << "Día no válido." << std::endl;
            break;
    }
  return 0;
}