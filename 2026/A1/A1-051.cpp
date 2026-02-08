//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;
    int n;
    cin >> s >> n;
    for(char &c : s)
        c = (c - 'a' + n) % 26 + 'a';
    cout << s;
}