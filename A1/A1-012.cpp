//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    char c;
    cin >> c;
    int a1 = stoi(s);
    reverse(s.begin(), s.end());
    int a2 = stoi(s);
    if(c == '+') cout << a1 << " + " << a2 << " = " << a1 + a2;
    else cout << a1 << " * " << a2 << " = " << a1 * a2;
}