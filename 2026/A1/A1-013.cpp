//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    char c;
    string s;
    cin >> c >> s;
    if(c == 'H' && s == "4567") cout << "safe unlocked";
    else if(s == "4567") cout << "safe locked - change char";
    else if(c == 'H') cout << "safe locked - change digit";
    else cout << "safe locked";
}