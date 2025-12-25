#include <iostream>

// Lan recursion es cuando una función se iunvoca a si misma desde dentro de la 
// propia función 

void caminar(int pasos);

int main()
{
    caminar(100);
  return 0;
}

void caminar(int pasos){
    // for(int i  = 0; i < pasos; i++){
    //     std::cout<< i + 1 << " Dando pasos! \n"; // Enfoque iterativo
    // }
   
    if(pasos > 0)
    {
      std::cout<< pasos <<" Dando pasos! \n";
      caminar(pasos -1);  // Enfoque recursivo 
    }
}

/*
En este caso el enfoque recursivo hace un consumo de memoria mas inficiente por eso 
en este caso es ineficiente. Es en otros casos el enfonque recursivo puede ser útil 
*/