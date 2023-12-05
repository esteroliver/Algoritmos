#include <iostream>
#include <chrono>
#include "vetor.hpp"
using namespace std;

int main(){
    vetor lista;
    for (int i = 0; i < 10000; i++){
        lista.inserir_final(i);
    }

    auto inc = chrono::high_resolution_clock::now();

    for (int i = 0; i < 10000; i++){
        lista.apagar();
    }

    auto fim = chrono::high_resolution_clock::now();
    auto duracao = fim - inc;
    
    cout << "TEMPO TOTAL: " << duracao.count() << endl;
}