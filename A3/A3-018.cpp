//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l,n; 
    cin >> l >> n;
    long long curr = 0; 
    int k = 0; 
    for (int i = 1; i <= l; i++){
        long long a = (long long)i * i;
        if (n >= curr + a){
            curr += a;
            k = i; 
        }else {
            break; 
        }
    }
    cout << l - k;
}