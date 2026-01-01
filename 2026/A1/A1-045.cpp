//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    if(n <= 1){
        cout << 35;
        return 0;
    }
    int ans = 35+5*(min(n,10)-1);
    cout << ans + 8 * max(0, n - 10);
}