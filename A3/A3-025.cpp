//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,w,l;
    cin >> n >> w >> l;
    vector<set<int>> pos(n);
    for (int i = 0; i < n; ++i){
        int k;
        cin >> k;
        set<int> cur;
        for (int j = 0; j < k; ++j){
            int p;
            cin >> p;
            for (int k = -l; k <= l; ++k){
                int p2 = p + k;
                if (p2 >= 1 && p2 <= w){
                    cur.insert(p2);
                }
            }
        }
        if (cur.empty()){ 
            cout << 0;
            return 0;
        }
        pos[i] = move(cur); 
    }
    set<int> ans = pos[0];
    for (int i = 1; i < n; ++i){
        set<int> nxt;
        auto it1 = ans.begin();
        auto it2 = pos[i].begin();
        while (it1 != ans.end() && it2 != pos[i].end()){
            if (*it1 < *it2){
                it1++;
            }else if (*it2 < *it1){
                it2++;
            }else { 
                nxt.insert(*it1);
                it1++;
                it2++;
            }
        }
        ans = move(nxt); 
        if (ans.empty()){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}