#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long notas[n];
    double media = 0;
    for (int i = 0; i<n; i++){
        cin >> notas[i];
        media += notas[i];
    }
    media = media/n;

    int abaixo = 0;
    vector<int> v_abaixo;
    int acima = 0;
    vector<int> v_acima;
    for (int j = 0; j<n; j++){
        if (notas[j] > media){
            acima += 1;
            v_acima.push_back(notas[j]);
        }
        else if(notas[j] < media){
            abaixo += 1;
            v_abaixo.push_back(notas[j]);
        }
    }

    cout << fixed << setprecision(1) << media << '\n';

    return 0;
}