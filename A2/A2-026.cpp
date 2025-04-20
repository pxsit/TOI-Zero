//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int cnt = 0,mx = INT_MIN;
    string res;
    int t;
    cin >> t;
    while(t--){
        string s;int n;
        cin >> s >> n;
        if(n > 15) cnt++;
        if(n > mx){
            mx = n;
            res = s;
        }
    }   
    cout << cnt << '\n' << res << ' ' << mx;
}