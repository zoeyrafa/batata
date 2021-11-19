#include <iostream>

struct Teste {
    int uga(){
        return 10;
    }

    int caverna = 0;
}


int main(){

    Teste a;
    a.caverna = 20;
    a.uga();

    unsigned int contador = 0;

    while(contador < 100){
        std::cout << contador << std::endl;
        contador++;
    }
    return 0;
}