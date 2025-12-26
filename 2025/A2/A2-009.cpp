//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,c; 
    cin >> n >> c;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        v[i] = i + 1;
    }
    bool cu = false; 
    while (v.size() > 1){
        vector<int> nt; 
        int crs = v.size(); 
        for (int i = 0; i < crs; i += 2){
            int ta = v[i]; 
            int tb = v[i + 1]; 
            int nw = a[ta][tb]; 
            int aw = nw; 
            if(c != 0 && !cu){
                if(ta == c && nw != c){
                    aw = c; 
                    cu = true; 
                }
                else if(tb == c && nw != c){
                    aw = c; 
                    cu = true; 
                }
            }
            nt.emplace_back(aw);
        }
        v = nt; 
    }
    cout << v[0];
}