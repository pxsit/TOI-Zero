//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b>> c;
    if(a == b && b == c) cout << "all the same";
    else if(a != b && b!= c && a!= c) cout << "all different";
    else cout << "neither";
}