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
    while( x != y && pessoas[x] != 0 && aps[y] != 0 ){
    
    }
}