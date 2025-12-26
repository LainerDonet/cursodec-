#include <iostream>

class Estufa{
    private:
        int temperatura = 0;
    public:
        int getTemperatura(){
            return temperatura;
        }
        void setTemperatura(int temperatura){
            this->temperatura = temperatura;
        }
};

int main(){
    Estufa estufa;
    estufa.setTemperatura(30);
    std::cout<<estufa.getTemperatura()<<std::endl;
    return 0;
}