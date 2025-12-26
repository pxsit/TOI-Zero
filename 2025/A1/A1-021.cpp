//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int a;
    cin >> a;
    if(a%400 == 0 || a == 1500) cout << "yes";
    else if(a%100 == 0) cout << "no";
    else if(a%4 == 0) cout << "yes";
    else cout << "no";
}