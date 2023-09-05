#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    double soma = 0;
    for (int i = 1; i<=n; i++){
        soma = soma + (1.0/i);
    }
    cout << fixed << setprecision(4) << soma;
    return 0;
}