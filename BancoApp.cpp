#include <iostream>

int main(){
    
    double saldo = 0.0;
    std::cout << "Bienvenido a BancoApp" << std::endl;
    std::cout << "Seleccione una opción:" << std::endl;
    std::cout << "1. Consultar saldo" << std::endl;
    std::cout << "2. Depositar dinero" << std::endl;
    std::cout << "3. Retirar dinero" << std::endl;
    std::cout << "4. Salir" << std::endl;
    int opcion;
    std::cin >> opcion; 
    do{
        switch(opcion){
        case 1:
            std::cout << "Su saldo es: $1000" << std::endl;
            break;
        case 2:
            std::cout << "Ingrese la cantidad a depositar: ";
            double deposito;
            std::cin >> deposito;
            std::cout << "Ha depositado: $" << deposito << std::endl;
            break;
        case 3:
            std::cout << "Ingrese la cantidad a retirar: ";
            double retiro;
            std::cin >> retiro;
            std::cout << "Ha retirado: $" << retiro << std::endl;
            break;
        case 4:
            std::cout << "Gracias por usar BancoApp. ¡Hasta luego!" << std::endl;
            break;
        default:
            std::cout << "Opción no válida. Por favor, intente de nuevo." << std::endl;
        } 

    }while (opcion != 4);
    
         
    return 0;
}