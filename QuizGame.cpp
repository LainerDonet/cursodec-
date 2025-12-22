#include <iostream>

int main(){
    std::string preguntas[]={
        "1. ¿En que anno se creo C++?",
        "2. ¿Quien es el creador de C++?",
        "3. ¿Cual es el preprocesador de C++?",
        "4. ¿Cual de las siguientes no es una palabra reservada en C++?",
    };
    std::string opciones[][4]={
        {"a) 1979","b) 1983","c) 1985","d) 1989"},
        {"a) Bjarne Stroustrup","b) James Gosling","c) Dennis Ritchie","d) Guido van Rossum"},
        {"a) g++","b) cpp","c) preproc","d) c++"},
        {"a) int","b) float","c) var","d) return"},
    };
    char respuestasCorrectas[]={'c','a','b','c'};
    int numPreguntas = sizeof(preguntas)/sizeof(preguntas[0]);
    char respuestaUsuario;
    int puntaje = 0;
    for(int i=0; i<numPreguntas; i++){
        std::cout << preguntas[i] << std::endl;
        for(int j=0; j< sizeof(opciones[i])/sizeof(opciones[i][0]); j++){
            std::cout << opciones[i][j] << std::endl;
        }
        std::cout << "Tu respuesta: ";
        std::cin >> respuestaUsuario;
        if(respuestaUsuario == respuestasCorrectas[i]){
            std::cout << "¡Correcto!" << std::endl;
            puntaje++;
        } else {
            std::cout << "Incorrecto. La respuesta correcta es: " << respuestasCorrectas[i] << std::endl;
        }
        std::cout << std::endl;
    }
    std::cout << "Tu puntaje final es: " << puntaje << " de " << numPreguntas << std::endl;
    return 0;
}