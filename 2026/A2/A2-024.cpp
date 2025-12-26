//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int solve(int l, int j, const map<int, int>& sp){
    if(j <= 0) return 0; 
    int cp = 0; 
    int s = 0;  
    auto ist = sp.find(0);
    if(ist != sp.end()) 
        s += ist->second;
    while (true){
        cp += j; 
        auto it = sp.find(cp);
        if(it != sp.end()) s += it->second;
        if(cp >= l)  break; 
    }
    return s; 
}

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int l, p; 
    cin >> l >> p;
    vector<int> a(3); 
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }
    map<int, int> sp; 
    for (int i = 0; i < p; i++){
        int x, y; 
        cin >> x >> y;
        sp[x] = y; 
    }
    vector<int> s(3); 
    vector<string> ns ={"Rabbit", "Monkey", "Frog"}; 
    for (int i = 0; i < 3; i++){
        s[i] = solve(l, a[i], sp);
    }
    int ms = s[0]; 
    for (int i = 1; i < 3; i++){
        if(s[i] > ms){
            ms = s[i]; 
        }
    }
    for (int i = 0; i < 3; i++){
        if(s[i] == ms){
            cout << ns[i] << " " << s[i] << '\n';
        }
    }
}