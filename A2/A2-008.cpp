//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n; 
    cin >> n;
    vector<long long> v(n);
    long long p; 
    for (int i = 0; i < n; i++){
        cin >> p >> v[i];
    }
    if(n <= 1){
        cout << 0;
        return 0;
    }
    int ans = 0;  
    long long mv = v[n - 1]; 
    for (int i = n - 2; i >= 0; i--){
        if(v[i] < mv){
            ans++; 
        }
        mv = max(mv, v[i]);
    }
    cout << ans;
}