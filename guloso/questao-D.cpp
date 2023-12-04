#include <bits/stdc++.h>

using namespace std;


int encontrar(vector<int> a, int tamanho, int valor){
    for (int i = 0; i < tamanho; i++){
        if(a[i] == valor) return i;
    }
    return -1;
}

int main(){
    int n;
    int s;
    cin >> n >> s;
    vector<int> a(n);
    vector<int> a_copy(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i] = a_copy[i] = x;
    }
    sort(a.begin(), a.end());
    int x = 0;
    int y = n-1;
    bool resposta = false;
    int ind1;
    int ind2;
    while(x != y && resposta != true){
        int soma = a[x] + a[y];
        if (soma == s){
            resposta = true;
            ind1 = encontrar(a_copy, n, a[x])+ 1;
            ind2 = encontrar(a_copy, n, a[y])+ 1;
        }
        if (soma < s) x++;
        if (soma > s) y--;
    }
    string resp = "IMPOSSIVEL";
    if (resposta) cout << ind1 << " " << ind2 << endl;
    else cout << resp << endl;
    
}
