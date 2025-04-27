//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std; 

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    char a,b;
    cin >> a >> b;
    int ans = 0;
    if(a == 'S') ans = 60;
    else if(a == 'M') ans = 80;
    else ans = 100;
    if(b == 'T') ans+=20;
    char c;
    cin >> c;
    if(c == 'N'){
        cout << ans;
        return 0;
    }
    int d;
    cin >> d;
    if(c == 'P') cout << ans+d*15;
    else cout << ans+d*10;
}