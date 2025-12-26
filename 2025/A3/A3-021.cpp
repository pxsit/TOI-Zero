//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; 
    ll k; 
    cin >> n >> k;
    vector<ll> a(n);
    ll mn = 0; 
    bool b = true; 
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (b || a[i] < mn){
            mn = a[i];
            b = false;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        ll c = a[i]; 
        if (c == mn){
            ans++;
            continue; 
        }
        ll diff = c - mn; 
        if ((c + diff - 1) / diff > k)
            ans++;
        
    }
    cout << ans;
}