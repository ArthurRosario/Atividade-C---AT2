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

    cout << "Tamanho da fila: "<< fila_sorteio.size()<<"\n"; // Tamanho da fila

    // Verificar o primeiro da lista e mostrar

    string primeiro_time = fila_sorteio.front();
    cout << "Primeiro: "<< primeiro_time<<"\n";

    fila_sorteio.pop(); //remove da fila, retirando o primeiro da lista
    cout << "tamanho fila: "<< fila_sorteio.size();

    while (!fila_sorteio.empty()){
        // Mostrar o primeiro da lista
        cout << "Primeiro: "<< fila_sorteio.front()<<"\n";
        //mostrar o ultimo da lista
        cout << "ultimo: " << fila_sorteio.back();

        fila_sorteio.pop();
        cout << "\nsegundo time: "<< fila_sorteio.front();
    }
    return 0; // termina o programa
}