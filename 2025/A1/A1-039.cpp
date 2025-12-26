//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    vector<unsigned long long> a(n+1);
    if(n == 1 || n == 0){
        cout << 1;
        return 0;
    }
    a[1] = 1;
    for(unsigned long long i=2;i<=n;i++){
        a[i] = a[i-1] * i;
    }
    cout << a[n];
}