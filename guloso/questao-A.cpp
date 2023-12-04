#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int s;
    cin >> n >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int x = 0;
    int y = n-1;
    string resp = "NO";
    while(x != y && resp != "YES"){
        int soma = a[x] + a[y];
        if (soma < s) x++;
        if (soma > s) y--;
        if (soma == s) resp = "YES";
    }
    cout << resp << endl;
}