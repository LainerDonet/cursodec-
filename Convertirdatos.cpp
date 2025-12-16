#include <iostream>

int main(){

    double entero = (int)3.999999999999; // Conversión explícita de double a int 
    // Solo se toma la parte entera, truncando los decimales
    entero = entero + .5; // Si sumamos entero obtnenemos 3.5
    std::cout << "El valor de entero es: " << entero << std::endl;

    char letra = 100; // Asignación implícita de int a char
    // El valor 100 corresponde al carácter 'd' en la tabla ASCII
    std::cout << "El valor de letra es: " << letra << std::endl;
    std::cout << "Convertir directamenta a ASCII: " << (char)67 << std::endl; // Conversión explícita de int a char"

    // Si divides un entero entre un flotante, el entero se convierte implícitamente a float ejemplo:
    int TotalALumnos = 30;
    int AlumnosAprobados = 18;
    double PorcentajeAprobados = (AlumnosAprobados * 100.0) / TotalALumnos; // Conversión implícita de int a double
    std::cout << "El porcentaje de alumnos aprobados es: " << PorcentajeAprobados << "%" << std::endl;
 
    return 0;
}