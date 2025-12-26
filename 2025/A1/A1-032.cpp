//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++) cout << '*';
    n-=2;
    if(n<1) return 0;
    cout << '\n';
    for(long long i=0;i<n;i++) cout << '*';
    n-=2;
    if(n<1) return 0;
    cout << '\n';
    for(long long i=0;i<n;i++) cout << '*';  
    cout << '\n';     
}