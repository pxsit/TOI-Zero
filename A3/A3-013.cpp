//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    long long n,s; 
    cin >> n >> s; 
    long long mn = 0,mx = 0; 
    for (int i = 0; i < n; i++){
        int h; 
        cin >> h; 
        bool d3 = (h % 3 == 0); 
        bool d4 = (h % 4 == 0); 
        if (d3 && !d4){
            mn += 10LL * (h / 3);
            mx += 10LL * (h / 3);
        }else if (!d3 && d4){
            mn += 10LL * (h / 4);
            mx += 10LL * (h / 4);
        }else if (d3 && d4){
            mn += 10LL * (h / 4);
            mx += 10LL * (h / 3);
        }
    }
    cout << s - mx << " " << s - mn;
}