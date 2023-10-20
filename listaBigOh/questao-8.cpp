#include <iostream>

using namespace std;

int main(){
    int seg, massa;
    cin >> seg >> massa;
    int tempo = 0;
    while (massa > 1){
        massa = massa/2;
        tempo += seg;
    }
    cout << tempo << " segundo(s)" << endl;
    return 0;
}

