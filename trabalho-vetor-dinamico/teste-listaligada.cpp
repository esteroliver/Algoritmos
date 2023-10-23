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

    cout << "LISTA:\n";
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    cout << "\n" <<"TAMANHO DA LISTA: "<< lista.tamanho() << endl;

    cout << "REMOVENDO VALOR DO ÍNDICE 2:\n";
    lista.remover_em(2);
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    cout << "\n" <<"TAMANHO DA LISTA: "<< lista.tamanho() << endl;

    cout << "INSERINDO VALOR NO ÍNDICE 5:\n";
    lista.inserir_em(5,77);
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    cout << "\n" <<"TAMANHO DA LISTA: "<< lista.tamanho() << endl;

    cout << "APAGANDO PRIMEIRO E ÚLTIMO ELEMENTO\n";
    lista.apagar_inicio();
    lista.apagar_final();
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    cout << "\n" <<"TAMANHO DA LISTA: "<< lista.tamanho() << endl;

    cout << "PRIMEIRO E ÚLTIMO ELEMENTO:\n";
    cout << lista.inicio() << " " << lista.final() << endl;

    cout << "REMOVENDO O 77:\n";
    lista.remover(77);
    for (unsigned int i = 0; i < lista.tamanho(); i++){
        cout << lista.get_em(i) << " ";
    }
    cout << "\n" <<"TAMANHO DA LISTA: "<< lista.tamanho() << endl;

    cout << lista.contar(5) << endl;
    lista.remover(5);
    cout << lista.contar(5) << endl;

    cout << "SOMA DOS ELEMENTOS: " << lista.soma();

    
}