//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int r, c, rr ,rc ,n; 
    cin >> r >> c >> rr >> rc >> n;
    vector<vector<int>> risk(r, vector<int>(c, 0));
    for (int i = 0; i < n; i++){
        int a, b; 
        cin >> a >> b;
        for (int j = a - 2; j <= a + 2; j++){
            for (int k = b - 2; k <= b + 2; k++){
                if(j >= 0 && j < r && k >= 0 && k < c){
                    int d = max(abs(j - a), abs(k - b));
                    int cr = 0; 
                    if(d == 0)
                        cr = 100;
                    else if(d == 1)
                        cr = 60;
                    else if(d == 2)
                        cr = 20;
                    risk[j][k] = max(risk[j][k], cr);
                }
            }
        }
    }
    int ans = 0; 
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            if(risk[i][j] == 0){
                ans++;
            }
        }
    }
    cout << ans << '\n' << risk[rr][rc] << '%';
}