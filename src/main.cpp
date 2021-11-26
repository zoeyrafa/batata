#include <iostream>

struct Teste {
    int uga(){
        return caverna;
    }

    float pedra = 0;

    int caverna = 0;
}
//Marcos Teixeira :D

int main(){

    Teste a;
    a.caverna = 20;
    a.uga();
    a.pedra = 20;

    unsigned int contador = 0;

    while(contador < 100){
        std::cout << contador << std::endl;
        contador++;
    }
    return 0;
}