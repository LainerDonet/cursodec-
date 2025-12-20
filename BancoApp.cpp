#include <iostream>
#include <iomanip>
#include <limits>

void mostrarSaldo(double saldo);
double deposito();
double retirar(double saldo);

int main(){
    double saldo = 0;
    int opc;
    //int opcion;
   do{ 
    std::cout<<"********************\n";
    std::cout<<"Ingresa una opción: \n";
    std::cout<<"********************\n";
    std::cout<<"1. Mostrar saldo\n";
    std::cout<<"2. Depositar dinero\n";
    std::cout<<"3. Retirar dinero\n";
    std::cout<<"4. Salir\n";
    std::cin>> opc;

    
    
    if(!(std::cin>> opc)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Entrada no valida! Intente de nuevo.\n";
    }else{
        switch(opc)
    {
        case 1:
            mostrarSaldo(saldo);
            break;
        case 2:
            saldo += deposito();
            mostrarSaldo(saldo);
            break;
        case 3:
            saldo -= retirar(saldo);
            mostrarSaldo(saldo);
            break;
        case 4:
            std::cout << "Gracias por la visita!\n";
            break;
        default:
            std::cout << "Selecciona una opcion valida"<< std::endl;
    }
   
    }
    }while(opc != 4);
        
    
    return 0;
}
void mostrarSaldo(double saldo){
    std::cout<<"Su balance es: $"<<std::setprecision(2)<<std::fixed<< saldo << std::endl;
}
double deposito(){

    double monto;
    std::cout<<"Ingresa el monto a depositar: ";
    std::cin>> monto;
    if (monto > 0){
        return monto;
    }else{
        return 0;
    }
    return monto;
}
double retirar(double saldo){
    double monto;
    std::cout<<"Ingresa el monto a retirar: ";
    std::cin>> monto;
    if(monto > saldo){
        std::cout << "Fondos insuficientes!\n";
        return 0;
    }else if(monto < 0){
        std::cout << "Esa no es una cantidad valida\n";
        return 0;
    }else{
        return monto;
    }
    return monto;
}