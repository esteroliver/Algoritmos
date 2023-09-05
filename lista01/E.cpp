#include <iostream>

using namespace std;

int main(){
    int medicoes;
    cin >> medicoes;
    int batimentos[medicoes];
    int media = 0;
    for (int i = 0; i<medicoes; i++){
        cin >> batimentos[i];
        media += batimentos[i];
    }
    int media_ab_ac = 0;
    media = media/medicoes;
    for (int j = 0; j<medicoes; j++){
        if (batimentos[j] >= int(media*0.9) && batimentos[j] <= int(media*1.1)){
            media_ab_ac += 0;
        }
        else media_ab_ac += 1;
    }

    cout << media << '\n' << media_ab_ac << '\n';

    return 0;
}