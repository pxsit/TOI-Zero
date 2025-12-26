//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b >> c;
    int odd=0,even = 0;
    if(a%2 == 1) odd++;
    else even++;
    if(b%2 == 1) odd++;
    else even++;
    if(c%2 == 1) odd++;
    else even++;
    cout << "even " << even << '\n';
    cout << "odd " << odd;
}