//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
const int dy[] = {-1, -1, -1,  0,  0,  1,  1,  1}; 
const int dx[] = {-1,  0,  1, -1,  1, -1,  0,  1}; 
int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>> cnt(n,vector<int>(m, 0));
    for(int i = 0; i < k; i++){
        int y,x;
        cin >> y >> x;
        if(y >= 0 && y < n && x >= 0 && x < m){
            cnt[y][x]++;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(cnt[i][j] == 0){
                int cur = 0;
                for(int d = 0; d < 8; d++){
                    int ny = i + dy[d], nx = j + dx[d];
                    if(ny >= 0 && ny < n && nx >= 0 && nx < m){
                        cur += cnt[ny][nx];
                    }
                }
                ans = max(ans, cur);
            }
        }
    }
    cout << ans;
}