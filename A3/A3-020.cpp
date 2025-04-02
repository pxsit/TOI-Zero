//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll h1, h2, b1, b2, x, y, ans=0; 
    cin >> h1 >> h2 >> b1 >> b2 >> x >> y;
    for (ll i = 0; i <= min(h1, b1); i++){
        for (ll j = 0; j <= min(h2, b2); j++){
            ans = max(ans, min(i + j, x) + min(min(h1 - i, b2 - j) + min(h2 - j, b1 - i), y));
        }
    }
    cout << ans;
}