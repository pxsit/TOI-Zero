//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
const int dx[] ={-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] ={-1, 0, 1, -1, 1, -1, 0, 1};
int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m,b;
    cin >> n >> m >> b;
    vector<vector<char>> grid(n,vector<char>(m,'0'));
    for(int i=0;i<b;i++){
        int x,y;
        cin >> x >> y;
        grid[x][y]= 'x';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] != 'x'){
                int cnt = 0;
                for(int k=0;k<8;k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == 'x')
                        cnt++;
                }
                grid[i][j] = cnt + '0';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }
}
