//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n; cin >> n;
    vector<int> arr;
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        arr.emplace_back(a);
    }
    sort(arr.begin(),arr.end());
    long long sum = 0, cnt = 0;
    for(auto i: arr){
        sum += i;
        cnt += sum*2;
    }cout << cnt;
}