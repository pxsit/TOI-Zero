//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> par,sz;
vector<ll> len;
int findpar(int i) {
    return (par[i] == i) ? i : par[i] = findpar(par[i]);
}
bool unite(int u, int v) {
    int paru = findpar(u);
    int parv = findpar(v);
    if (paru != parv) {
        if (sz[paru] < sz[parv]) swap(paru, parv);
        par[parv] = paru;
        len[paru] += len[parv];
        sz[paru] += sz[parv];
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vector<ll> seg(n);
    int curr = 0;
    ll total = 0;
    map<int, vector<int>> depth;
    for (int i = 0; i < n; i++) {
        ll d,l;
        cin >> d >> l;
        curr += d;
        seg[i] = l;
        total += l;
        depth[curr].push_back(i);
    }
    par.resize(n + 1);
    iota(par.begin(), par.end(), 0);
    len.resize(n + 1);
    sz.assign(n + 1, 1);
    for (int i = 1; i <= n; i++) {
        if (i - 1 < seg.size())
            len[i] = seg[i - 1];
        else
            len[i] = 0;
    }
    vector<bool> act(n + 1, false);
    ll mx = 0;
    vector<pair<int, ll>> res;
    for(auto it = depth.rbegin(); it != depth.rend(); it++) {
        int d = it->first;
        if (d <= 0) continue;
        for (int x : it->second) {
            int k = x + 1;
            act[k] = true;
            if (k > 1 && act[k - 1]) 
                unite(k, k - 1);
            if (k < n && act[k + 1]) 
                unite(k, k + 1);
            mx = max(mx, (k < 1 || k >= par.size()) ? 0 : len[findpar(k)]);
        }
        res.push_back({d, mx});
    }
    for (int i = 0; i < q; i++) {
        ll a;
        cin >> a;
        if (a > total) {
            cout << 0;
            continue;
        }
        auto it = lower_bound(res.begin(), res.end(), a, [](const pair<int, ll>& p, ll tl) {return p.second < tl;});
        if (it == res.end())
            cout << 0 << '\n';
        else
            cout << it->first << '\n';
    }
}