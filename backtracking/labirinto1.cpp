#include <bits/stdc++.h>

using namespace std;

bool labirinto1(int labirinto[8][10], int linha, int coluna, int l, int c){
    if (l < 0 or c < 0 or l >= linha or c >= coluna or labirinto[l][c] == 1) return false;
    if (l == linha-1 and c == coluna-1) return true;
    if (labirinto1(labirinto, linha, coluna, l+1, c)) return true;
    if (labirinto1(labirinto, linha, coluna, l, c+1)) return true;
    return false;
}

int main(){
    //CONSTRUINDO O LABIRINTO
    int lab[8][10];
    for(int i = 0; i < 8; i++){
        for (int j = 0; j < 10; j++){
            lab[i][j] = 0;
        }
    }
    lab[2][1] = 1;
    lab[3][1] = 1;
    lab[4][1] = 1;
    lab[5][1] = 1;

    lab[6][0] = 1;
    lab[6][1] = 1;
    lab[6][2] = 1;

    lab[0][4] = 1;

    lab[2][3] = 1;
    lab[2][4] = 1;
    lab[2][5] = 1;
    lab[1][6] = 1;
    lab[2][6] = 1;
    lab[2][7] = 1;
    lab[2][8] = 1;
    lab[3][8] = 1;

    lab[4][4] = 1;
    lab[5][4] = 1;
    lab[6][4] = 1;
    lab[7][4] = 1;

    lab[4][6] = 1;
    lab[5][6] = 1;
    lab[5][7] = 1;
    lab[5][8] = 1;
    lab[5][9] = 1;

    lab[7][6] = 1;

    for(int i = 0; i < 8; i++){
        for (int j = 0; j < 10; j++){
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
    bool resp = labirinto1(lab, 8, 10, 0, 0);
    string r = "NO";
    if (resp) r = "YES";
    cout << r << endl;

}