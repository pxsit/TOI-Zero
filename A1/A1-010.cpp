//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    char b;
    cin >> a >> b;
    if(b == 's' || b == 'S' || a<18) cout << 20;
    else cout << 50;
}