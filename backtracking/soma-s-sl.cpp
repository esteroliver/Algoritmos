#include <bits/stdc++.h>

using namespace std;

int soma_sublista_bt(int a[], int tam, int soma){
    int r;
    if (soma == 0) return true;
    if (soma < 0 || tam == 0) return false;
    r = soma_sublista_bt(a, tam-1, soma - a[tam-1]);
    r = r || soma_sublista_bt(a, tam-1, soma);
    return r;
}

int main(){
    int a[] = {8, 35, 6, 21, 12};
    int soma = 41;
    int tam = 5;
    cout << soma_sublista_bt(a, tam, soma) << endl;
}

