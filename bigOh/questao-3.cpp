#include <iostream>

using namespace std;

int main(){
    int n, s;
    cin >> n;
    int numeros[n];
    for (int i = 0; i<n; i++)
        cin >> numeros[i];
    cin >> s;
    bool teste = false;
    for (int j = 0; j<n; j++){
        for (int h = 0; h<n; h++){
            if (numeros[j] + numeros[h] == s){
                teste = true;
                break;
            }
        }
    }
    if (teste) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

