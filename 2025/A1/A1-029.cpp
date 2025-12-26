//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;
    cin >> s;
    int a = 0;
    for(char i:s){
        if( i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') a++;
    }
    cout << a;
}