//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    long long n, k, t; cin >> n >> k >> t;
    int num = 0;
    set<int> s;
    while(true){
        if(s.find(num+1)!=s.end()||num+1==t){
            cout << s.size()  + (num+1==t);
            break;
        }
        s.insert(num+1);
        num = (num+k)%n;
    }
}