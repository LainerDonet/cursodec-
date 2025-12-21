#include <iostream>

//int buscarArreglo(int arr[], int tam, int valorBuscado);
int buscarComida(std::string arr[], int tam, std::string valorBuscado);

int main(){
    /*
    int numeros[] = {10, 20, 30, 40, 50};
    int tam = sizeof(numeros) / sizeof(numeros[0]);

    int indiceBuscado;
    int numeroaEncontrar;

    std::cout << "Ingresa un elemento a buscar en el arreglo: ";
    std::cin >> numeroaEncontrar;

    indiceBuscado = buscarArreglo(numeros, tam, numeroaEncontrar);
    */

    // Ejemplo de uso con un string:

    std::string menuDeComidas[] = {"Comida italiana", "Comida Mexicana", "Comida Cubana", "Comidad Española", "Comida China", "Comida Japonesa"};
    int tam1 = sizeof(menuDeComidas) / sizeof(std::string);

    int indiceBuscado1;
    std::string numeroaEncontrar1;

    std::cout << "Ingresa un elemento a buscar en el arreglo: ";
    std::getline(std::cin, numeroaEncontrar1);

    indiceBuscado1 = buscarComida(menuDeComidas, tam1, numeroaEncontrar1);
    
    return 0;
}

/*int buscarArreglo(int arr[], int tam, int valorBuscado){
    for(int i = 0; i < tam; i++){
        if(arr[i] == valorBuscado){
            std::cout << "El elemento " << valorBuscado << " se encuentra en el índice: " << i << std::endl;
            return i;
        }
    }
    std::cout << "El elemento " << valorBuscado << " no se encuentra en el arreglo." << std::endl;
    return -1;
}*/

int buscarComida(std::string arr[], int tam, std::string valorBuscado){
    for(int i = 0; i < tam; i++){
        if(arr[i] == valorBuscado){
            std::cout << "El elemento " << valorBuscado << " se encuentra en el índice: " << i << std::endl;
            return i;
        }
    }
    std::cout << "El elemento " << valorBuscado << " no se encuentra en el arreglo." << std::endl;
    return -1;
}