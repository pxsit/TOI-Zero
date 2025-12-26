//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; 
    cin >> n;
    if (n == 0){
        cout << 0;
        return 0;
    }
    vector<int> u(n),v(n);
    for (int i = 0; i < n; i++){
        int x, y; 
        cin >> x >> y;
        u[i] = x + y; 
        v[i] = x - y; 
    }
    sort(u.begin(), u.end());
    sort(v.begin(), v.end());
    int mid = (n - 1) / 2; 
    int mu = u[mid]; 
    int mv = v[mid]; 
    long long ans = 0;
    for (int i = 0; i < n; i++){
        ans += (long long)abs(u[i] - mu);
        ans += (long long)abs(v[i] - mv);
    }
    cout << ans;
}