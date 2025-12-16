#include <iostream>

int main(){
    /*
    Hay dos pasos para declarar una variable:
    1. Declarar el tipo de dato
    2. Asignar un nombre a la variable
    */
   int numero;        // Declaración de una variable de tipo entero llamada numero
   numero = 10;      // Asignación de un valor a la variable numero

   int numero2 = 20; // Declaración y asignación en una sola línea
   int suma = numero + numero2; // Suma de dos variables
   int edad = 25; // Declaración y asignación de una variable edad
   int año = 2024; // Declaración y asignación de una variable año

   // Doble o Flotante
   double decimal = 5.99; // Declaración y asignación de una variable de tipo double
   double pi = 3.14159; // Declaración y asignación de una variable pi
   double promedio = (decimal + pi) / 2; // Cálculo del promedio
   double temperatura = 36.6; // Declaración y asignación de una variable temperatura

   float altura = 1.75f; // Declaración y asignación de una variable de tipo float

   /* 
   Double de 64 decimales almacena hasta 15 digitos decimales 
   Float de 32 decimales almacena hasta 7 digitos decimales
   long double de 128 decimales almacena hasta 19 digitos decimales
   */

   //Character
   char letra = 'A'; // Declaración y asignación de una variable de tipo char

   //Boleano
   bool esVerdadero = true; // Declaración y asignación de una variable booleana
   bool esFalso = false; // Declaración y asignación de una variable booleana

   //Stiring
    std::string mensaje = "Hola, Mundo!"; // Declaración y asignación de una variable de tipo string
    std::string nombre = "Lainer Felipe"; // Declaración y asignación de una variable nombre

   std::cout <<"Hola "<< nombre << std::endl; // Imprime el valor de la variable nombre

    return 0;
}