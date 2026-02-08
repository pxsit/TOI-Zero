//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    if(n % 100 != 0 || n > 20000){
        cout << "ERROR";
        return 0;
    }
    for(int x : {1000,500,100}){
        if(n == 0) break;
        if(n < x) continue;
        cout << x << " = " << n / x << '\n';
        n %= x;
    }
}