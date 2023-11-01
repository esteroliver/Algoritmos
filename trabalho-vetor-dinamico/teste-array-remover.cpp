#include <iostream>
#include <chrono>
#include "arrayset.hpp"

using namespace std;

int main() {
    int n;
    array_set lista;
    for (int i = 0; i < 14; i++) {
        cin >> n;
        lista.inserir_final(n);
    }

    auto inc = chrono::high_resolution_clock::now();

    int m;
    unsigned int removidos = 0, nao_removidos = 0;
    for (int j = 0; j < 16; j++) {
        cin >> m;
        if (lista.remover_em(m))
            removidos++;
        else
            nao_removidos++;
    }
    auto fim = chrono::high_resolution_clock::now();
    auto tempo = fim - inc;
    cout << lista.tamanho() << endl;
    cout << removidos << endl;
    cout << nao_removidos << endl;
    cout << tempo.count() << endl;
    return 0;
}