#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int vol, num;
    cin >> vol >> num;
    int voluntarios_g[vol];
    for (int i = 0; i<vol; i++){
        voluntarios_g[i] = i+1; 
    }
    int x;
    for (int j = 0; j < num; j++){
        cin >> x;
        voluntarios_g[x-1] = 0;
    }
    int soma = 0;
    for (int m = 0; m<vol; m++){
        soma = voluntarios_g[m] + soma;
        if (voluntarios_g[m] != 0) cout << voluntarios_g[m] << " ";
    }
    if (soma == 0) cout << "*" << endl;
}