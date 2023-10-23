#include <iostream>
#include "listaligada.hpp"

using namespace std;

int main(){
    lista_ligada lista;
    for (int i = 1; i <= 10; i++){
        lista.inserir_final(i);
    }

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

    cout << "SOMA DOS ELEMENTOS: " << lista.soma();
}