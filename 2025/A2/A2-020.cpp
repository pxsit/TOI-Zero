//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<bool> v(n + 1, false);  
    int mcl = 0; 
    for (int i = 1; i <= n; i++){  
        if(!v[i]){
            int cn = i,cl=0;
            while (!v[cn]){
                v[cn] = true;
                cn = a[cn];
                cl++; 
            }
            mcl = max(mcl, cl);
        }
    }
    cout << mcl;
}