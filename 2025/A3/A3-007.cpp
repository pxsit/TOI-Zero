//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int num, gap=1, ans, n, l;
int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    cin >> l >> n;
    while(num < n){
        for(int i=1; i<=l; i++, gap++){
            num += gap;
        }
        ans++;
    }
    cout << ans;
}