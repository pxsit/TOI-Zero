//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b>> c;
    bool d = false;
    if(a < 5) d = true;
    if(b < 20) d = true;
    if(c < 25) d = true;
    if(d) cout << "fail";
    else cout << "pass";
}