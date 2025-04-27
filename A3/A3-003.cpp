//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n], b[n];
    for (auto &e : a) cin >> e;
    for (auto &e : b) cin >> e;
    int x = 1, y = 1, cnt = 0;
    for (int i = 0; i < n; i++){
        int xx = a[i], yy = b[i];
        int p = x, pp = xx, q = y, qq = yy;
        if (p > pp) swap(p, pp);
        if (q > qq) swap(q, qq);
        if (p == q && pp == qq) cnt++;
        else if (p != q && p != qq && pp != q && pp != qq){
            if (p < q && pp > q && pp < qq) cnt++;
            else if (q < p && qq > p && qq < pp) cnt++;
        }
        x = xx, y = yy;
    }
    cout << cnt;
}