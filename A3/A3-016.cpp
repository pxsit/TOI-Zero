//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;  
    cin >> n >> m;
    vector<vector<int>> r(n + 1);
    vector<int> targ(m + 1),need(m + 1); 
    for (int i = 1; i <= m; i++){
        int k; 
        cin >> k;
        need[i] = k;
        vector<int> cur(k); 
        for (int j = 0; j < k; j++){
            cin >> cur[j];
            r[cur[j]].push_back(i);
        }
        cin >> targ[i];
    }
    vector<bool> on(n + 1, false); 
    queue<int> q; 
    int ans = 0; 
    if (n >= 1){
        on[1] = true;
        q.push(1);
        ans = 1;
    }
    while (!q.empty()){
        int u = q.front(); 
        q.pop();
        for (int x : r[u]){
            need[x]--;
            if (need[x] == 0){
                int xx = targ[x]; 
                if (!on[xx]){
                    on[xx] = true;
                    ans++;
                    q.push(xx);
                }
            }
        }
    }
    cout << ans;
}