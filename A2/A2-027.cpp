//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int cnt = 0,mx = INT_MIN;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n > mx){
            mx = n;
            cnt = 1;
        }else if(n == mx){
            cnt++;
        }
    }  
    cout << mx << '\n' << cnt;
}