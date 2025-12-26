//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

struct ev{
    int c; 
    int t; 
};
bool cmp(const ev &a, const ev &b){
    if(a.c != b.c){
        return a.c < b.c; 
    }
    return a.t > b.t; 
}

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int l, n; 
    cin >> l >> n;
    vector<ev> es; 
    es.reserve(2 * n);
    for (int i = 0; i < n; i++){        
        int a, b; 
        cin >> a >> b;
        es.push_back({a, 1});
        es.push_back({b, -1});
    }
    sort(es.begin(), es.end(), cmp);
    int mo = 0,co=0; 
    for (int i = 0; i < es.size(); i++){
        co += es[i].t;
        if((i == es.size() - 1 || es[i].c < es[i + 1].c) && co > mo) mo = co;
    }
    cout << mo;
}