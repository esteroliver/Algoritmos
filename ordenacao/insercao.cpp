#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 1; i < n; i++){
        int ins = a[i];
        for (int j = 0; j < i+1; j++){
            if (ins < a[j]){
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}