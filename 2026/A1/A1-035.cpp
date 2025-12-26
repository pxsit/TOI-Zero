//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    unsigned long long a = 0;
    for(unsigned long long i=1; i<=n; i++){
        a += i*i;
    }
    cout << (unsigned long long)a;
}
