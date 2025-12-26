//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std; 

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    char a,c;
    string b,d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    bool cm = (c == a), nm = (d == b), e = false, f = false;
    if(b.length() == 5 && d.length() == 5){
        e = (d.substr(2) == b.substr(2));
        f = (d.substr(3) == b.substr(3));
    }
    if(cm && nm)
        ans = max(ans, 1000000);
    if(!cm && nm)
        ans = max(ans, 100000);
    if(cm && e)
        ans = max(ans, 2000);
    if(cm && f)
        ans = max(ans, 1000);
    if(!cm && e)
        ans = max(ans, 200);
    if(!cm && f)
        ans = max(ans, 100);
    if(cm && !nm)
        ans = max(ans, 20);
    cout << ans;
}