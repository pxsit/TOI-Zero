//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; 
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    long long bad = 0; 
    map<int, int> m;  
    int l = 0,dc=0;                
    for (int i = 0; i < n; i++){
        m[c[i]]++;
        if (m[c[i]] == 1)
            dc++; 
        while (dc >= k){
            m[c[l]]--;
            if (m[c[l]] == 0)
                dc--; 
            l++; 
        }
        bad += (i - l + 1);
    }
    cout << (long long)n * (n + 1) / 2 - bad;
}