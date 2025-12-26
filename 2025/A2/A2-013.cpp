//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    char a,c;
    int b,d,e;
    cin >> a >> b >> c >> d >> e;
    ll p = 0;
    if(a == 'H')
        p = (ll)b * 5;
    else if(a == 'O')
        p = (ll)b * 3;
    else if(a == 'J')
        p = (ll)b * 2;
    
    ll t = 0;
    if(c == 'R'){
        if(d == 1)
            t = 12;
        else if(d == 2)
            t = 18;
        else
            t = 25;
    }else if(c == 'T'){
        if(d == 1)
            t = 15;
        else if(d == 2)
            t = 20;
        else
            t = 30;
    }else if(c == 'M'){
        if(d == 1)
            t = 10;
        else if(d == 2)
            t = 15;
        else
            t = 20;
    }
    
    cout << p + t * e;
}