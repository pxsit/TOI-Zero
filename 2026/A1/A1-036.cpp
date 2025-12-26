//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    if(n%10 !=0) n-=n%10;
    while(n >= 0){
        cout << n << " ";
        n-=10;
    }   
}