#include <iostream>

struct estudiantes{
    std::string nombre;
    double promedio;
    bool inscripto;

};

int main()
{
    estudiantes estudiantes1;
    estudiantes1.nombre = "Harry Potter";
    estudiantes1.promedio = 8.3;
    estudiantes1.inscripto = true;

    std::cout << "Nombre del estudiante 1 " << estudiantes1.nombre << " promedio " << estudiantes1.promedio << (estudiantes1.inscripto ? ", esta inscripto" : ", no esta inscripto") << std::endl;

    estudiantes estudiantes2;

    estudiantes2.nombre = "Hermione Granger";
    estudiantes2.promedio = 10.0;
    estudiantes2.inscripto = true;

    std::cout << "Nombre del estudiante 2 " << estudiantes2.nombre << " promedio " << estudiantes2.promedio << (estudiantes2.inscripto ? ", esta inscripto" : ", no esta inscripto") << std::endl;


  return 0;
}