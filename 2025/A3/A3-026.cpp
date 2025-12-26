//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
const int dy[] ={-1, -1, -1,  0,  0,  1,  1,  1}; 
const int dx[] ={-1,  0,  1, -1,  1, -1,  0,  1}; 
int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<vector<char>> s1(n, vector<char>(m)), s2(n, vector<char>(m));
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> s1[i][j];
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> s2[i][j];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s1[i][j] == '-')
                cout << s2[i][j];
            else if(s2[i][j] == '-')
                cout << s1[i][j];
            else    
                cout << '*';
        }
        cout << '\n';
    }
}