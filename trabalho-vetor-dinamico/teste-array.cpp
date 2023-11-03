#include <iostream>
#include "arrayset.hpp"

using namespace std;

int main(){
    array_set l1;
    cout << "Tamanho inicial da lista 1: " << l1.tamanho() << endl;

    for (int i = 0; i < 10; i++){
        l1.inserir_final(i+1);
    }
    for (int i = 0; i < 10; i++) {
        cout << l1.get_em(i) << " ";
    }
    cout << endl;
    cout << "Tamanho atual da lista 1: " << l1.tamanho() << endl;
    cout << "Capacidade atual da lista 1: " << l1.capacidade() << endl;
    cout << "Porcentagem ocupada da lista 1: " << l1.porcentagem_ocupada() << endl;

    array_set l2;
    for(int j = 10; j < 20; j++){
        l2.inserir_final(j+1);
    }
    for (int k = 10; k > 0; k--){
        l2.inserir_inicio(k);
    }

    for (int i = 0; i < l2.tamanho(); i++) {
        cout << l2.get_em(i) << " ";
    }
    cout << endl;

    l2.inserir_em(4, 84123);

    for (int i = 0; i < l2.tamanho(); i++) {
        cout << l2.get_em(i) << " ";
    }
    cout << endl;

    l2.remover_em(4);

    for (int i = 0; i < l2.tamanho(); i++) {
        cout << l2.get_em(i) << " ";
    }
    cout << endl;

    l2.inserir_inicio(100);
    l2.inserir_final(200);

    for (int i = 0; i < l2.tamanho(); i++) {
        cout << l2.get_em(i) << " ";
    }
    cout << endl;

    l2.apagar_final();
    l2.apagar_inicio();
    for (int i = 0; i < l2.tamanho(); i++) {
        cout << l2.get_em(i) << " ";
    }
    cout << endl; 
    int x =  l2.tamanho();
    for (int i = 0; i < x; i++) {
        l2.apagar_inicio();
    }

    cout << l2.tamanho() << endl;

    cout << l1.inicio() << endl;
    cout << l1.final() << endl;

    cout << l1.encontrar(4) << endl;

    array_set l3;
    for (int i = 0; i< 10; i++){
        l3.inserir_final(5);
    }
    cout << l3.contar(5)<< endl;
    cout << l3.soma() << endl;
    l3.limpar();
    cout << l3.tamanho() << endl;

}

/*
- Tamanho
- Capacidade
- Porcentagem ocupada
- Inserir em
- Remover em
- Get em
- Inserir inicio
- Inserir final
- Apagar inicio
- Apagar final
- Inicio
- Final
- Remover
- Encontrar
- Contar
- Somar
- Limpar

*/