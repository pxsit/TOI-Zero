//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;

struct Edge{
    int t, r, c;     
};

vector<vector<Edge>> g; 
vector<int> lvl;       
vector<int> pt;       
int node;         
int src, sink; 

void add(int u, int v, int c){
    g[u].push_back({v, (int)g[v].size(), c});
    g[v].push_back({u, (int)g[u].size() - 1, 0});
}
bool bfs(){
    lvl.assign(node, -1); 
    queue<int> q;
    lvl[src] = 0; 
    q.push(src);
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (ll i = 0; i < g[u].size(); ++i){
            Edge edge = g[u][i];
            if(edge.c > 0 && lvl[edge.t] < 0){
                lvl[edge.t] = lvl[u] + 1; 
                q.push(edge.t);          
            }
        }
    }
    return lvl[sink] != -1;
}

int dfs(int u, int psh){
    if(psh == 0) return 0; 
    if(u == sink) return psh; 
    for (int& i = pt[u]; i < g[u].size(); i++){
        Edge &edge = g[u][i]; 
        int v = edge.t;
        if(lvl[v] != lvl[u] + 1 || edge.c == 0) continue;
        int tr = dfs(v, min(psh, edge.c));
        if(tr == 0) continue;
        edge.c -= tr;
        g[v][edge.r].c += tr;
        return tr;
    }
    return 0;
}

int araiwa(){
    int flow = 0;
    while (bfs()){
        pt.assign(node, 0);
        while (int psh = dfs(src, INF)){
            if(psh == 0) break;
            flow += psh;
        }
    }
    return flow; 
}
int n, k;
vector<int> a1, a2, b1, b2; 
bool check(ll t){
    node = 4 * n + 2;
    src = 0;
    sink = 4 * n + 1;
    g.assign(node, vector<Edge>());
    for (int i = 0; i < n; i++){
        add(src, i + 1, 1);
        add(src, n + i + 1, 1);
    }
    for (int j = 0; j < n; j++){
        add(2 * n + j + 1, sink, 1);
        add(3 * n + j + 1, sink, 1);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if((ll)a1[i] + b1[j] <= t){
                add(i + 1, 2 * n + j + 1, 1);
            }
            if((ll)a2[i] + b2[j] <= t){
                add(n + i + 1, 3 * n + j + 1, 1);
            }
        }
    }
    return araiwa() >= k; 
}


int main(){ios::sync_with_stdio(false);cin.tie(nullptr); 
    cin >> n >> k;
    a1.resize(n); 
    a2.resize(n); 
    b1.resize(n); 
    b2.resize(n); 
    for (int i = 0; i < n; i++){
        cin >> a1[i];
    }
    for (int i = 0; i < n; i++){
        cin >> a2[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b1[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b2[i];
    }
    ll l = 0,r = 2000001, ans = r;             
    while (l <= r){
        ll mid = l + (r - l) / 2; 
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << ans;
}