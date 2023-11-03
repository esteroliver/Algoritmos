#include <iostream>
#include "listaligada.hpp"

using namespace std;

int main(){
    lista_ligada l1;
    cout << "Tamanho inicial da lista 1: " << l1.tamanho() << endl;

    for (int i = 0; i < 10; i++){
        l1.inserir_em(i, i+1);
    }
    cout << "Tamanho atual da lista 1: " << l1.tamanho() << endl;

    lista_ligada l2;
    for(int j = 10; j < 20; j++){
        l2.inserir_final(j+1);
    }
    for (int k = 0; k < 10; k++){
        l2.inserir_inicio(k+1);
    }
}