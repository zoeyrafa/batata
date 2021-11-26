#include <iostream>

struct Teste {
    int uga(){
        return caverna;
    }

    float pedra = 0;

    int caverna = 0;
}
// Thiago Alves da Silva Evangelista
// Marcos Teixeira :D
// Felipe_Castrl

int main(){

    Teste a;
    a.caverna = 20;
    a.uga();
    a.pedra = 20;

    unsigned int contador = 0;
	// Esse arquivo contem batatas, mas voce vai encontrar mais do que só batata.

    while(contador < 100){
        std::cout << contador << std::endl;
        contador++;
    }
	cout << "Batata é gostosa de todas as formas possíveis. Deveri ser um elogio!" << endl;
    return 0;
}
