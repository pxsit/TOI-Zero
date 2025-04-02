//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cnt = 0;
    while(n--){
        char c;
        cin >> c;
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') cnt++;
    }    
    cout << cnt; 
}