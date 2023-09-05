#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    double soma = 0;
    for (int i = 1; i<=n; i++){
        soma = soma + (1/n);
    }
    cout << soma;
    return 0;
}