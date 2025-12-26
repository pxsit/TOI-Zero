//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr); 
    int n,l;  
    cin >> n >> l; 
    vector<int> h(n),p(n),a(n);
    for (int i = 0; i < n; i++){
        cin >> h[i]; 
    }
    p[0] = h[0]; 
    for (int i = 1; i < n; i++){
        p[i] = max(p[i-1], h[i]);
    }
    for (int i = 0; i < l; i++){
        cin >> a[i]; 
    }
    for (int i = 0; i < l; i++){
        int k = a[i]; 
        int ans; 
        if (k == 1)
            ans = max(0, 1-h[k - 1]);
        else
            ans = max(0, p[k-2] - h[k - 1] + 1);
        cout << ans << '\n';
    }
}