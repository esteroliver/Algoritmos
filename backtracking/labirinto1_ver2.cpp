#include <bits/stdc++.h>

using namespace std;

bool labirinto1(int labirinto[4][4], int linha, int coluna, int l, int c){
    if (l < 0 or c < 0 or l >= linha or c >= coluna or labirinto[l][c] == 1) return false;
    if (l == linha-1 and c == coluna-1) return true;
    if (labirinto1(labirinto, linha, coluna, l+1, c)) return true;
    if (labirinto1(labirinto, linha, coluna, l, c+1)) return true;
    return false;
}

int main(){
    //CONSTRUINDO O LABIRINTO
    int lab[4][4];
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            lab[i][j] = 0;
        }
    }
    lab[2][1] = 1;
    lab[3][1] = 1;

    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << lab[i][j] << " ";
        }
        cout << endl;
    }
    //PROCURANDO UMA SAÍDA (existe saída?)
        //Célula (0, 0) é a entrada
        //Célula (7, 9) é para ser a saída
        //HÁ DUAS DIREÇÕES
            //(L + 1, C) - Abaixo
            //(L, C + 1) - Direita
            //NÃO PODE ULTRAPASSAR LIMITES (células iguais a 1)
    bool resp = labirinto1(lab, 4, 4, 0, 0);
    string r = "NO";
    if (resp) r = "YES";
    cout << r << endl;

}