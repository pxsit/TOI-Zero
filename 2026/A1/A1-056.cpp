//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int x1, x2, y1, y2, z1, z2;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    float ans = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    cout << fixed << setprecision(2) << ans;
}