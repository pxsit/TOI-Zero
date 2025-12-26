//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int w, h, m, n;
    cin >> w >> h >> m >> n;
    vector<int> x(m), y(n);
    for (int i = 0; i < m; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];
    x.insert(x.begin(), 0); x.emplace_back(w);
    y.insert(y.begin(), 0); y.emplace_back(h);
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    vector<int> width, height;
    for (int i = 1; i < x.size(); i++) width.emplace_back(x[i] - x[i - 1]);
    for (int i = 1; i < y.size(); i++) height.emplace_back(y[i] - y[i - 1]);
    sort(width.rbegin(), width.rend());
    sort(height.rbegin(), height.rend());
    cout << width[0] * height[0] << ' ' << max(width[0] * height[1], width[1] * height[0]);
}
