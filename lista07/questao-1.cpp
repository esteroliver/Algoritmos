#include <bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin >> s;
    int n[8];
    string ans = "No\n";
    for (int i = 0; i < 8; i++){
        cin >> n[i];
    }
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (n[i] + n[j] == s){
                ans = "Yes\n";
            }
        }
    }
    cout << ans;

}