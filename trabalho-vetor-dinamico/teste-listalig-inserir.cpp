#include "listaligada.hpp"
#include <iostream>
#include <chrono>

using namespace std;

int main(){
    auto inc = chrono::high_resolution_clock::now();
   
    int x;
    lista_ligada lista;
    while (cin >> x){
        lista.inserir_final(x);
    }

    auto fim = chrono::high_resolution_clock::now();
    auto total = fim - inc;
    cout << "TEMPO TOTAL = " << total.count() << endl;
    
}