//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;
    cin >> s;
    int x = 0, y = 0;
    for(char c : s){
        if(c == 'N') y++;
        else if(c == 'S') y--;
        else if(c == 'E') x++;
        else if(c == 'W') x--;
    }
    cout << x << ' ' << y << ' ' << abs(x) + abs(y);
}