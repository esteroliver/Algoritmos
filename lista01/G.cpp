#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int vol, num;
    cin >> vol >> num;
    int voluntarios_v[num];
    int voluntarios_g[vol];
    for (int i = 0; i<vol; i++){
        if (i < num) cin >> voluntarios_v[i];
        voluntarios_g[i] = i+1; 
    }

    for (int j = 0; j<vol; j++){
        for (int h = 0; h<num; h++){
            if (voluntarios_v[h] == voluntarios_g[j]){
                voluntarios_g[j] = 0;
            }
        }
    }
    int soma = 0;
    for (int m = 0; m<vol; m++){
        soma = voluntarios_g[m] + soma;
        if (voluntarios_g[m] != 0) cout << voluntarios_g[m] << " ";
    }
    if (soma == 0) cout << "*" << endl;
}