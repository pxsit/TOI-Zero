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
    int curr = s, ans = 0; 
    while (curr != 0 && !visited[curr]){
        visited[curr] = true;
        ans++;
        curr = a[curr];
    }
    cout << ans;
}