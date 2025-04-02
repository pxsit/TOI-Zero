//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int,int>> pay; 
    int n,l,res=0,mix=0,may=1e9+7;
    cin >> n >> l;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        pay.push_back({x,min(l,y)});
    }
    sort(pay.begin(),pay.end());
    for(int i=0;i<pay.size();i++){
        auto x = pay[i];
        mix=max(mix,x.first);
        may=min(may,x.second);
        if(mix>may) res++,mix=x.first,may=x.second;
    }
    cout << res+1;
}
