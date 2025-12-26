//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;         
    cin >> n; 
    vector<int> a(301, 0);
    int ans = 0; 
    for (int i = 0; i < n; i++){               
        int x;         
        cin >> x; 
        a[x]++; 
        ans = max(ans, a[x]);
    }
    cout << ans;
}