//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    bool v[360]={};
    int n,res=0,ox=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        if(y<x){
            for(int j=x;j<360;j++) v[j]=true;
            for(int j=0;j<y;j++) v[j]=true;
        }else{
            for(int j=x;j<y;j++) v[j]=true;
        }
    }
    for(int i=0;i<720;i++){
        if(v[i%360]) ox++;
        else res=max(res,ox),ox=0;
    }
    if(ox>=360) res=360;
    cout << res;
}