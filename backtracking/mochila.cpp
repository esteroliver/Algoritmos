#include <bits/stdc++.h>

using namespace std;

struct item{
    int peso;
    double valor;
};

double mochila(vector<item> &itens, int tam, int peso){
    int r;
    double ans1 = 0;
    double ans2 = 0;
    int ans = 0;
    if (peso == 0) return ans;
    if (peso < 0 || tam < 0) return 0;
    if (peso - itens[tam].peso >= 0)
        ans1 += itens[tam].valor + mochila(itens, tam-1, peso - itens[tam].peso);

    ans2 = mochila(itens, tam-1, peso);

    if (ans1 > ans2) ans = ans1;
    else ans = ans2;
    return ans;
}

int main(){
    int tam, peso;
    cin >> tam >> peso;
    vector<item> itens(tam);
    for (int i = 0; i < tam; i++){
        cin >> itens[i].peso >> itens[i].valor;
    }
    cout << mochila(itens, tam-1, peso) << endl;
}