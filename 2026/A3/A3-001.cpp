//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

struct node{
    int a,l,b,c; 
};

vector<node> r;
long long ans = 0;
long long dfs(int id){
    long long wl,wr; 
    node cur = r[id]; 
    if (cur.a == 0)
        wl = dfs(cur.l); 
    else
        wl = cur.l; 
    if (cur.b == 0) 
        wr = dfs(cur.c); 
    else
        wr = cur.c; 
    ans += abs(wl - wr);
    return 2 * max(wl, wr);
}

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; 
    cin >> n;
    r.resize(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> r[i].a >> r[i].l >> r[i].b >> r[i].c;
    }
    dfs(1);
    cout << ans;
}