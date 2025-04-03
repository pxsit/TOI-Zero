//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,s; 
    cin >> n >> s;
    vector<int> a(n + 1); 
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<bool> visited(n + 1, false);
    int ans = 0; 
    while (s != 0 && !visited[s]){
        visited[s] = true;
        ans++;
        s = a[s];
    }
    cout << ans;
}
