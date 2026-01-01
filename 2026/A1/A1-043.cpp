//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    float total = (a + b) * (c > 3 ? 1.5 : 1.0);
    int code = 1;
    if(total >= 1500.0)
        code = 5;
    else if(total >= 1000.0)
        code = 4;
    else if(total >= 500.0)
        code = 3;
    else if(total >= 200.0)
        code = 2;
    int special = 0;
    if(code == 5 && c >= 7)
        special = 99;
    else if(code == 4 && b > 300)
        special = 88;
    if((float)(((int)total)) == total)
        cout << total << '\n';
    else
        cout << fixed << setprecision(1) << total << '\n';
    cout << code << '\n' << special;
}