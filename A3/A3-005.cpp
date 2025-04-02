//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int vit[1000002];
int main(){
    int n,m,res=0;
    cin >> n >> m;
    while(m--){
        int x,y;
        cin >> x >> y;
        vit[x]++;
        vit[y+1]--;
    }
    for(int i=1;i<=n;i++){
        vit[i]+=vit[i-1];
        res=max(res,vit[i]);
    }
    cout << res;
}
