#include <iostream>

using namespace std;

int main(){
    int pop;
    cin >> pop;
    int dias = 0;
    for (int i = 1; i<pop; i*=2)
        dias++;
    cout << dias << " dia(s)" << endl;
    return 0;
}

