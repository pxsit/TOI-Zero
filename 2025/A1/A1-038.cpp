//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%5 == 0) cout << 'X';
        else cout << '*';
    }
}