//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    int cnt = 0; 
    if(n == 1){
        cnt = 1; 
    }else{
        if(a[0] > a[1]) 
            cnt++;
        for (int i = 1; i < n - 1; i++){
            if(a[i] > a[i - 1] && a[i] > a[i + 1]) 
                cnt++;
        }
        if(a[n - 1] > a[n - 2]) 
            cnt++;
    }
    cout << cnt;
}