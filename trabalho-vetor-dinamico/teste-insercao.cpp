#include <iostream>
#include <chrono>
#include "vetor.hpp"

using namespace std;

int main(){
    int n;
    vetor lista;
    auto inc = chrono::high_resolution_clock::now();

    while (cin >> n){
        lista.inseir(n);
    }

    auto fim = chrono::high_resolution_clock::now();
    auto duracao = fim - inc;
    
    cout << "TEMPO TOTAL: " << duracao.count() << endl;
}