#include <iostream>
#include "listaligada.hpp"

using namespace std;

int main(){
    lista_ligada lista;
    lista.inserir_final(1);
    lista.inserir_final(2);
    lista.inserir_final(3);
    lista.inserir_final(4);
    lista.inserir_final(5);
    lista.inserir_final(6);
    lista.inserir_final(7);
    lista.inserir_final(8);
    lista.inserir_final(9);
    lista.inserir_final(10);
    cout << lista.tamanho() << endl;
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    lista.remover_em(2);
    cout << lista.tamanho() << endl;
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    cout << endl;
    lista.remover(7);
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    cout << endl;
    lista.inserir_em(2, 42);
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    cout << endl;
    lista.limpar();
    cout << lista.tamanho();
}