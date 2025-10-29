#include <iostream>
#include <string>
using namespace std;
struct Feitico{
    string nome;
    int dificuldade;
    int dano_base;
    float mana_consumida;
};

int main (){
    float multiplicador;
    Feitico feitico_1;

    feitico_1.nome = "Grito do Abismo";
    feitico_1.dificuldade = 4;
    feitico_1.dano_base = 75;
    feitico_1.mana_consumida;

    if (feitico_1.dificuldade == 1 || feitico_1.dificuldade == 2){
        multiplicador = 1.0;
    }
    else if (feitico_1.dificuldade == 3 || feitico_1.dificuldade == 4){
        multiplicador = 1.5;
    }
    else if (feitico_1.dificuldade == 5){
        multiplicador = 2.0;
    }
    
    feitico_1.mana_consumida = feitico_1.dano_base * multiplicador;


    cout << "Status"<< endl;
    cout << "Feitiço: " <<feitico_1.nome<<endl;
    cout << "Dano: " << feitico_1.dano_base<< endl;
    cout << "Consumo de mana: " << feitico_1.mana_consumida<< endl;
}

