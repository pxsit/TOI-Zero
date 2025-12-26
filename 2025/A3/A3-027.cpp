//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m,'+'));
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) 
            cin >> grid[i][j];
    vector<vector<char>> ans = grid;
    for(int i = 0; i < n-1; i++) 
        for(int j = 0; j < m; j++) 
            if(grid[i][j] == '*') 
                ans[i+1][j] = '*';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << ans[i][j] << ' ';
        cout << '\n';
    }
}