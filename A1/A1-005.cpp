//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin >> a >> b;
    if(a == 1 || a == 2 || (a == 3 && b < 21))
        cout << "winter";
    else if((a == 3 && b >= 21) || a == 4 || a == 5 || (a == 6 && b < 21))
        cout << "' 'ring";
    else if((a == 6 && b >= 21) || a == 7 || a == 8 || (a == 9 && b < 21))
        cout << "summer";
    else if((a == 9 && b >= 21) || a == 10 || a == 11 || (a == 12 && b < 21))
        cout << "fall";
    else
        cout << "winter";
}