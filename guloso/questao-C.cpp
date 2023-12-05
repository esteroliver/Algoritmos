#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> pessoas(n);
    vector<int> aps(m);
    for (int i = 0; i < n; i++) cin >> pessoas[i];
    for (int i = 0; i < m; i++) cin >> aps[i];

    sort(pessoas.begin(), pessoas.end());
    sort(aps.begin(), aps.end());
    pessoas.push_back(0);
    aps.push_back(0);

    int x = 0;
    int y = 0;
    int resp = 0;
    
    while(pessoas[x] != 0 && aps[y] != 0 ){
        if (pessoas[x] == aps[y] or abs(pessoas[x] - aps[y]) <= k){
            x++;
            y++;
            resp++;
        }
        else if (pessoas[x] > aps[y]) y++;
        else if (aps[y] > pessoas[x]) x++;
    }
    cout << resp << endl;
}