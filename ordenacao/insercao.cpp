#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int a_copy[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        a_copy[i] = a[i];
        for (int j = 0; j < i; j++){
            if (a_copy[i] < a_copy[j]){
                int aux = a_copy[j];
                a_copy[j] = a_copy[i];
                a_copy[i] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << a_copy[i] << " ";
     cout << endl;
}