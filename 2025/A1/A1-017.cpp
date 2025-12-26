//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int a1,a2,b1,b2,c1,c2;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    if(a1 == a2 && b1 == b2 && c1 == c2) cout << 0;
    else if(a1 > a2) cout << 2;
    else if(a2 > a1) cout << 1;
    else if(b2 > b1) cout << 1;
    else if(b1 > b2) cout << 2;
    else if(c2 > c1) cout << 1;
    else cout << 2;
}