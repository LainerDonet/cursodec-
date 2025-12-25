#include <iostream>

class Humano {
  public:
  /*
  Ponemos darle valores predefinidos a los atributos de la clase en el mismo lugar donde los declaramos.
  Sintaxis:
  tipo_de_dato nombre_atributo = valor_predefinido;
  Cuando no se define la clase como privada o publica por defecto es privada.

  */
    std::string nombre;
    int edad;   
    std::string nacionalidad;
    std::string ocupacion;
    void presentarse() {
        std::cout << "Hola, mi nombre es " << nombre << ", tengo " << edad << " años, soy " << nacionalidad << " y trabajo como " << ocupacion << "." << std::endl;
    }
    void cumpleaños() {
        edad++;
        std::cout << "¡Feliz cumpleaños " << nombre << "! Ahora tienes " << edad << " años." << std::endl;
    }
    void estoyTrabajando() {
        std::cout << nombre << " está trabajando como " << ocupacion << "." << std::endl;
    }   
};
int main() {
    Humano humano1;
    humano1.nombre = "Carlos";
    humano1.edad = 30;
    humano1.nacionalidad = "argentino";
    humano1.ocupacion = "ingeniero";
    humano1.presentarse();
    humano1.cumpleaños();
    humano1.estoyTrabajando();

    return 0;
}   
