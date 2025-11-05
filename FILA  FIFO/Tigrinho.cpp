// FILA | FIFO
// FIRST IN, First OUT

#include <iostream>
#include <string>
#include <queue> // Contem estrutura fila 
using namespace std;

int main(){
    //criação da fila
    queue<string> fila_sorteio;
    
    cout << "Sistema de sorteio\n\n";
    // Verificar se a fila está vazia
    cout << fila_sorteio.empty();
    cout << "inscrição de times\n\n";

    fila_sorteio.push("Flamengo\n"); //Primeiro a entrar
    cout << "Flamengo entrou\n";

    fila_sorteio.push("palmeiras\n"); //Segundo a entrar
    cout << "Palmeiras entrou\n";

    cout << "Tamanho da fila: "<< fila_sorteio.size(); // Tamanho da fila

    return 0; // termina o programa
}