//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i){
        cin >> p[i];
    }
    set<long long> s;
    for (int i = 0; i < n; i++){
        long long sum = 0;
        for (int j = i; j < n; j++){
            sum += p[j];
            s.insert(sum);
        }
    }
    cout << s.size();
}