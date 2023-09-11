#include <iostream>

using namespace std;

int main(){
    int quant, s;
    cin >> quant >> s;
    int numeros[quant];
    for (int i = 0; i < quant; i++) cin >> numeros[i];
    bool soma = false;
    for (int j = 0; j < quant; j++){
        int n1 = numeros[j];
        for (int k = 0; k < quant; k++){
            if (n1+numeros[k] == s){
                soma = true;
                break;
            }
        }
    }
    if (soma) cout << "YES";
    
    else cout << "NO";
}