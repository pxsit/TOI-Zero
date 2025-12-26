//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    long long w, l, m, n; cin >> w >> l >> m >> n;
    if(l>w) swap(w,l);
    long long mn = INT_MAX;
    for(int i = m; i <= n; i++){
        long long a = w*l;
        if(a>0) a -= (i*l)*(w/i);
        if(a>0) a -= (w%i)*(l-(l%i));
        mn = min(a,mn);
    }
    cout << mn;
}