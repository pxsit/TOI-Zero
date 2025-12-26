//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int cnt = 0, n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    for(int i = 0; i < n; i++){
        if((a[i]-'0') + (b[i]-'0') != 9){
            cnt++;
        }
    }
    if(cnt == 0){
        cout << "YES";
    }else{
        cout << "NO " << cnt;
    }
}