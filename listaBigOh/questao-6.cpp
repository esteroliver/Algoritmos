#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int fixo = a;
    for (int i = 1; i<b; i++) a = a * fixo;
    cout << a << endl;
    return 0;
}
