#include <iostream>
#include <vector>
// Definición de un nuevo tipo de dato usando typedef
// typedef std::vector<std::pair<std::string, int>> parir_list_t;
using parir_list_t = std::vector<std::pair<std::string, int>>;

int main() {
    parir_list_t estudiantes;

    estudiantes.push_back(std::make_pair("Lainer", 25));
    estudiantes.push_back(std::make_pair("Ana", 22));
    estudiantes.push_back(std::make_pair("Carlos", 23));

    for (const auto& estudiante : estudiantes) {
        std::cout << "Nombre: " << estudiante.first << ", Edad: " << estudiante.second << std::endl;
    }

    return 0;
}