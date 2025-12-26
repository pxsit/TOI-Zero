//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false), cin.tie(nullptr);
    int x, l;
    cin >> x;
    for (l = 0; l*l < x; l++);
    cout << 2*(l-1) - (x % 2 != l % 2) << '\n';
}