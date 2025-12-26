//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,a=INT_MAX;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        a = min(a,x);
    }
    cout << a;
}