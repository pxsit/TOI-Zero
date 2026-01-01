// Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    double ans = 0;
    double ft = (double)n * 0.5;
    ans += 5 * min(n, 10);
    n -= min(n, 10);
    ans += 7 * min(n, 40);
    n -= min(n, 40);
    ans += 10 * min(n, 50);
    n -= min(n, 50);
    ans += 12 * min(n, 100);
    n -= min(n, 100);
    if (n > 0)
        ans += 15 * n;
    ans *= 1.07;
    cout << fixed << setprecision(2) << ans + ft;
}