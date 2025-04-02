//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);, cin.tie(nullptr);
    int n;
    cin >> n;
    unsigned __int128 a = 0;
    for(unsigned __int128 i=1; i<=n; i++){
        a += i*i;
    }
    cout << (long long)a;
}