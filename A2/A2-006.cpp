//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
char g[31][31];
bool dp[31][31];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; 
    cin >> n; 
    for (int i = 0; i < n; i++){ 
        string r;
        cin >> r; 
        for (int j = 0; j < n; j++){ 
            g[i][j] = r[j]; 
            dp[i][j] = false; 
        }
    }
    if(g[n - 1][n - 1] == '.') 
        dp[n - 1][n - 1] = true;
    for (int i = n - 1; i >= 0; i--){ 
        for (int j = n - 1; j >= 0; j--){ 
            if(i == n - 1 && j == n - 1) 
                continue;
            if(g[i][j] == '.'){
                bool rd = false; 
                if(i + 1 < n)
                    rd = dp[i + 1][j]; 
                bool rr = false; 
                if(j + 1 < n)
                    rr = dp[i][j + 1]; 
                dp[i][j] = rd || rr;
            }
            
        }
    }
    long long cnt = 0; 
    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < n; j++){ 
            if(dp[i][j]){ 
                cnt++;
            }
        }
    }
    cout << cnt;
}