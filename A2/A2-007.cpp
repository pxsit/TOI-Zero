//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj; 
vector<int> p,tl,it,et,sz; 
vector<bool> ist,htd; 
vector<pair<int, int>> cords; 
int tt; 
void dfss(int u, vector<bool>& visited){
    visited[u] = true; 
    sz[u] = 1; 
    tt++; 
    it[u] = tt;
    if(u < adj.size()){
        for (int v : adj[u]){
            if(v > 0 && v < visited.size() && !visited[v]){
                dfss(v, visited); 
                if(v < sz.size()) sz[u] += sz[v]; 
            }
        }
    }
    tt++; 
    et[u] = tt;
}

void dfsh(int u, vector<bool>& visited){
    visited[u] = true; 
    bool curr = (u > 0 && u < ist.size() && ist[u]); 
    if(u < adj.size()){
        for (int v : adj[u]){
            if(v > 0 && v < visited.size() && !visited[v]) dfsh(v, visited); 
            if(v > 0 && v < htd.size() && htd[v]) curr = true; 
        }
    }
    if(u > 0 && u < htd.size()) htd[u] = curr; 
}

bool ispar(int u, int v){
    if(u == 0) return true; 
    if(v == 0) return false; 
    if(u < 1 || u >= it.size() || v < 1 || v >= it.size() || it[u] == 0) return false; 
    return it[u] <= it[v] && et[v] <= et[u];
}

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m; 
    cin >> n >> m;
    adj.resize(n + 1);
    p.resize(n + 1, 0); 
    sz.resize(n + 1, 0);
    ist.resize(n + 1, false);
    htd.resize(n + 1, false); 
    cords.resize(n + 1);
    it.resize(n + 1, 0);
    et.resize(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> cords[i].first >> cords[i].second;
    }
    for (int i = 0; i < m; i++){
        int targ;
        cin >> targ;
        if(targ >=1 && targ <= n){
            ist[targ] = true;
            tl.emplace_back(targ); 
        }
    }
    for (int j = 1; j <= n; j++){
        int paridx = 0;
        long long mn = -1; 
        for (int i = 1; i <= n; i++){
            if(i == j) continue; 
            if(cords[i].first < cords[j].first && cords[j].second < cords[i].second){
                long long curr = (long long)cords[i].second - cords[i].first;
                if(paridx == 0 || curr < mn){
                    mn = curr; 
                    paridx = i; 
                }
            }
        }
        p[j] = paridx;
        if(paridx > 0 && paridx <= n){
            adj[paridx].emplace_back(j);
        }
    }
    tt = 0; 
    vector<bool> visiteds(n + 1, false),visitedh(n + 1, false); 
    for (int i = 1; i <= n; i++){
        if(p[i] == 0 && !visiteds[i]) dfss(i, visiteds); 
    }
    for (int i = 1; i <= n; i++){
        if(p[i] == 0 && !visitedh[i]) dfsh(i, visitedh); 
    }
    set<int> init;
    for (int t : tl){
        if(t < 1 || t > n || !htd[t]) continue; 
        int curr = t;
        int mx = t; 
        while(p[curr] != 0){
            int parnode = p[curr];
            if(parnode > 0 && parnode <= n && htd[parnode]){
                mx = parnode; 
                curr = parnode; 
            }else{
                break; 
            }
        }
        init.insert(mx); 
    }
    set<int> fs = init; 
    map<int, vector<int>> targv; 
    map<int, int> targm; 
    for(int t : tl){
        if(t < 1 || t > n) continue; 
        int curh = 0; 
        int curr = t;
        while(curr != 0){
            if(fs.count(curr)){
                curh = curr; 
            }
            curr = p[curr]; 
        }
        if(curh != 0){
            targm[t] = curh; 
            targv[curh].emplace_back(t); 
        }
    }
    queue<int> q;
    for (int ss : fs){
        q.push(ss);
    }
    while (!q.empty()){
        int s = q.front(); 
        q.pop(); 
        if(fs.find(s) == fs.end()){
            continue;
        }
        int bst = 0; 
        if(s > 0 && s < adj.size()){
            for (int c : adj[s]){
                if(c < 1 || c > n) continue; 
                if(!htd[c]) continue; 
                bool all = true; 
                if(targv.find(s) == targv.end() || targv[s].empty()){
                    all = false; 
                }else{
                    for (int t : targv[s]){
                        if(!i' 'ar(c, t)){
                            all = false; 
                            break; 
                        }
                    }
                }
                if(all){
                    bst = c; 
                    break; 
                }
            }
        }
        if(bst > 0){
            int c = bst;
            fs.erase(s); 
            fs.insert(c); 
            if(targv.count(s)){
                vector<int> mov = targv[s]; 
                targv.erase(s); 
                targv[c] = mov; 
                for (int t : mov){
                    if(t > 0 && t <=n) targm[t] = c; 
                }
            }
            q.push(c); 
        }
    }
    vector<int> ans; 
    for(int x : fs){
        ans.emplace_back(x);
    }
    sort(ans.begin(), ans.end()); 
    cout << ans.size() << '\n';
    bool first = true; 
    for (int x : ans){
        if(!first){
            cout << " "; 
        }
        cout << x; 
        first = false; 
    }
}
