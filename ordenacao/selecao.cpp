#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        int aux = i;
        int menor = a[i];
        for (int j = (i+1); j < n; j++){
            if (a[j] < menor){
                menor = a[j];
                aux = j;
            }
        }
        int aux2 = a[i];
        a[i] = menor;
        a[aux] = aux2;
    }
    for (int i = 0; i < n-1; i++) cout << a[i] << " ";
    cout << a[n-1] << endl;
}