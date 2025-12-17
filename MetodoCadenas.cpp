#include <iostream>

int main(){
    std::string nombre = "Alexandra";

    // Metodo length(), acceso a caracteres por indice
    std::cout<< "Longitud de la cadena: " << nombre.length() << std::endl;
    std::cout<< "Primera letra: " << nombre[0] << std::endl;
    std::cout<< "Ultima letra: " << nombre[nombre.length() - 1] << std::endl;

    //Metodo empty() devuelve 1 si la cadena esta vacia, 0 en caso contrario
    std::cout<< "¿La cadena esta vacia? " << (nombre.empty() ? "Si" : "No") << std::endl;

    //Metodo clear() elimina el contenido de la cadena
    nombre.clear();
    std::cout<< "Contenido despues de clear(): '" << nombre << "'" << std::endl;
    std::cout<< "¿La cadena esta vacia? " << (nombre.empty() ? "Si" : "No") << std::endl;

    //Metodo append() agrega contenido al final de la cadena
    nombre.append("Carlos");
    std::cout<< "Contenido despues de append(): " << nombre << std::endl;

    //Metodo at() acceso a caracteres con verificacion de limites
    std::cout<< "Primera letra usando at(): " << nombre.at(0) << std::endl;
    std::cout<< "Ultima letra usando at(): " << nombre.at(nombre.length() - 1) << std::endl;

    //Metodo insert() inserta una subcadena en una posicion especifica
    nombre.insert(0, "Sr. ");
    std::cout<< "Contenido despues de insert(): " << nombre << std::endl;

    //Metodo find() busca una subcadena y devuelve la posicion de la primera ocurrencia
    size_t posicion = nombre.find("Carlos");
    if (posicion != std::string::npos) {
        std::cout<< "'Carlos' encontrado en la posicion: " << posicion << std::endl;
    } else {
        std::cout<< "'Carlos' no encontrado" << std::endl;
    }

    //Metodo erase() elimina una parte de la cadena desde una posicion dada y una longitud especifica
    nombre.erase(0, 4); // Elimina "Sr. "
    std::cout<< "Contenido despues de erase(): " << nombre << std::endl;

    //Metodo substr() obtiene una subcadena desde una posicion dada y una longitud especifica
    std::string subcadena = nombre.substr(0, 4); // Obtiene los primeros 3 caracteres
    std::cout<< "Subcadena obtenida con substr(): " << subcadena << std::endl;

    return 0;
}