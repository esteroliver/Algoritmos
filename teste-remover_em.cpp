#include <iostream>
#include <chrono>
#include "vetor.hpp"

using namespace std;

int main(){
    int n;
    vetor lista;
    for (int i = 0; i < 10000; i++){
        lista.inserir(i);
    }

    auto inc = chrono::high_resolution_clock::now();

    while (cin>> n) {
        lista.remover_em(n);
    }

    auto fim = chrono::high_resolution_clock::now();
    auto duracao = fim - inc;
    
    cout << "TEMPO TOTAL: " << duracao.count() << endl;
}