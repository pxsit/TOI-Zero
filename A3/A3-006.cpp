//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int n, in, ans;
vector<int> v, arr;
int main(){
    cin >> n;
    for(int i=1; i<=200; i++){
        for(int j=1; j<=9; j++) v.emplace_back(i*2);
        v.emplace_back(i);
    }
    sort(v.begin(), v.end());
    for(int i=1; i<=n; i++){
        cin >> in;
        arr.emplace_back(in);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i=0; i<n; i++){
        ans += arr[i]*v[i];
    }
    cout << ans;
}