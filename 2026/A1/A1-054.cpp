//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    char c;
    int yr, money;
    cin >> c >> yr >> money;
    int ans;
    if(c == 'M'){
        ans = 1500;
        if(yr >= 10)
            ans += money / 10;
        else if(yr >= 5)
            ans += money / 100 * 8;
        else
            ans += money / 100 * 6;
    } else if (c == 'B') {
        ans = 1000;
        if (yr >= 10)
            ans += money / 100 * 7;
        else if (yr >= 5)
            ans += money / 100 * 6;
        else
            ans += money / 100 * 5;
    } else {
        ans = 500;
        if (yr >= 10)
            ans += money / 100 * 6;
        else if (yr >= 5)
            ans += money / 100 * 5;
        else
            ans += money / 100 * 4;
    }
    cout << ans;
}