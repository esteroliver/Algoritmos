#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    int j = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    
    sort(a.begin(), a.end(), [](const pair<int, int> &p1, const pair<int, int> &p2){
        if (p1.second == p2.second) return p1.first < p2.first;
        return p1.second < p2.second;
    });
    
    int resp = 1;
    pair<int, int> ult = a[0];
    for(int i = 1; i < n; i++){
        int x = a[i].first;
        int y = ult.second;
        if (y == x || x > y){
            resp++;
            ult = a[i];
        }
    }
    cout << resp << endl;
}