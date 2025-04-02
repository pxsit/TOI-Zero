//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    string a, b;
    if(isdigit(s[0])){
        if(s.size() >= 3 && s[0] == '1' && s[1] == '0'){
            a = "10";
            b = s.substr(2);
        } else{
            a = s[0];
            b = s.substr(1);
        }
    } else{
        a = s[0];
        b = s.substr(1);
    }
    string c;
    if(a == "A") c = "ace";
    else if(a == "J") c = "jack";
    else if(a == "Q") c = "queen";
    else if(a == "K") c = "king";
    else c = a; 
    string d;
    if(b == "D") d = "diamonds";
    else if(b == "H") d = "hearts";
    else if(b == "S") d = "' 'ades";
    else if(b == "C") d = "clubs";
    cout << c << " of " << d;
}