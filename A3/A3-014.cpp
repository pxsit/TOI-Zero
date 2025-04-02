//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tmp;
    cin >> tmp;
    long long n = tmp , l = 0 , s = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x > 18) l++;
        else s++;
    }
    cout << n+(max(0LL,l-s-1));
}