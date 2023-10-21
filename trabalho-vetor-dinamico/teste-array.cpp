#include <iostream>
#include "arrayset.hpp"

using namespace std;

int main(){
    array_set lista;
    lista.inserir_inicio(1);
    lista.inserir_inicio(2);
    lista.inserir_inicio(3);
    lista.inserir_final(10);
    cout << lista.inserir_em(1, 5) << endl;
    int tamanho = lista.tamanho();
    for (int i = 0; i < tamanho; i++){
        cout << lista.get_em(i) << " ";
    }
    cout << endl;
    int soma = lista.soma();
    cout << soma << endl;
    cout << "Primeiro elemento: " << lista.inicio() << endl;
    cout << "Último elemento: " << lista.final() << endl;
    lista.remover_em(2);
    int tamanho2 = lista.tamanho();
    for (int i = 0; i < tamanho2; i++){
        cout << lista.get_em(i) << " ";
    }
    return 0;
}