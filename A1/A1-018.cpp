//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    if(a > 9 || a == 0) cout << "Error : Out of range";
    else if(a < 0) cout << "Error : Please input positive number";
    else{
        if(a == 1) cout << 'I';
        else if(a == 2) cout << "II";
        else if(a == 3) cout << "III";
        else if(a == 4) cout << "IV";
        else if(a == 5) cout << "V";
        else if(a == 6) cout << "VI";
        else if(a == 7) cout << "VII";
        else if(a == 8) cout << "VIII";
        else if(a == 9) cout << "IX";
    }
}