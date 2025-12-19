#include <iostream>

void verYouTube(){
    std::cout<<"Vamos hacer ver un video de YouTube"<<std::endl;
}
void verYouTube(std::string video){
    std::cout<<"Vamos a ver el video "<<video<<std::endl;
}
void verYouTube(std::string video, std::string canal){
    std::cout<<"Vamos a ver el video: "<< video << " en el canal "<< canal<<std::endl;
}

int main(){
    
    std::string video = "El Insu se jodio";
    std::string canal = "Guateque en Vivo";
    
    verYouTube(video, canal);
    return 0;
}
