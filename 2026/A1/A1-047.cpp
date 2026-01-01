//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n, a;
    cin >> n >> a;
    n *= a;
    if(n == 0){
        cout << "No teaching";
        return 0;
    }
    if(n%60 && n/60) 
        cout << n/60 << " hours " << n%60 << " minute";
    else if(n/60)
        cout << n/60 << " hours";
    else
        cout << n%60 << " minute";
}