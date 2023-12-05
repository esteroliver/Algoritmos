#include <bits/stdc++.h>

using namespace std;

int busca(int a[], int x, int inicio, int fim){
    int meio = 0;
    if (inicio > fim) return 0;
    else meio = (inicio + fim) / 2;
    if (x == a[meio]) return meio;
    else{
        if (x < a[meio])
            return busca(a, x, inicio, meio-1);
        else 
            return busca(a, x, meio+1, fim);
    }
}