// Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float a, b, c;
    cin >> a >> b >> c;
    int total = a + b + c;
    a = a * 25 + b * 40 + c * 55;
    if (total >= 3)
        cout << (int)floor(a * 0.9);
    else
        cout << (int)round(a);
}