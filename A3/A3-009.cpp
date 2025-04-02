//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, k; cin >> n >> k;
    vector<int> arr; int mn = INT_MAX;
    arr.resize(k+1);
    for(int i = 1, a; i <= n; i++){
        cin >> a;
        arr[a]++;
    }
    for(int i = 1; i <= k; i++) mn = min(arr[i],mn);
    long long cnt = 0;
    for(int i = 1; i <= k; i++) cnt += arr[i]-mn;
    cout << cnt;
}