//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; 
    cin >> n;
    map<long long, pair<int, int>> m1; 
    map<long long, pair<int, int>> m2; 
    for (int i = 0; i < n; i++){
        int x, y; 
        cin >> x >> y;
        long long d1 = (long long)y - x;
        long long d2 = (long long)y + x;
        auto it1 = m1.find(d1); 
        if(it1 == m1.end()){
            m1.emplace(d1, make_pair(x, x)); 
        }else{
            it1->second.first = min(it1->second.first, x); 
            it1->second.second = max(it1->second.second, x); 
        }
        auto it2 = m2.find(d2); 
        if(it2 == m2.end()){
            m2.emplace(d2, make_pair(x, x)); 
        }else{
            it2->second.first = min(it2->second.first, x); 
            it2->second.second = max(it2->second.second, x); 
        }
    }
    long long ms = 0; 
    for (const auto& p : m1){
        int mn = p.second.first;  
        int mx = p.second.second; 
        if(mx > mn){
            ms = max(ms, (long long)(mx - mn)); 
        }
    }
    for (const auto& p : m2){
        int mn = p.second.first;  
        int mx = p.second.second; 
         if(mx > mn){
            ms = max(ms, (long long)(mx - mn)); 
        }
    }
    cout << ms;
}