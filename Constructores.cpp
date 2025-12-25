#include <iostream>

class Estudiante{
    public:
        std::string nombre;
        double promedio;
        bool inscripto;
    
        // Constructor por defecto
        Estudiante() : nombre(""), promedio(0.0), inscripto(false) {}
    
        // Constructor con parámetros
        Estudiante(std::string n, double p, bool i) : nombre(n), promedio(p), inscripto(i) {}
};
int main()
{
    Estudiante estudiante1; // Llama al constructor por defecto
    estudiante1.nombre = "Harry Potter";
    estudiante1.promedio = 8.3;
    estudiante1.inscripto = true;

    std::cout << "Nombre del estudiante 1 " << estudiante1.nombre << " promedio " << estudiante1.promedio << (estudiante1.inscripto ? ", esta inscripto" : ", no esta inscripto") << std::endl;

    Estudiante estudiante2("Hermione Granger", 10.0, true); // Llama al constructor con parámetros

    std::cout << "Nombre del estudiante 2 " << estudiante2.nombre << " promedio " << estudiante2.promedio << (estudiante2.inscripto ? ", esta inscripto" : ", no esta inscripto") << std::endl;
  return 0;
}