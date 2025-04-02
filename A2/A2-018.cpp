//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    int n;
    cin >> c >> n;
    int i;
    if(c == 'R') i = 0;
    else if(c == 'G') i = 1;
    else i = 2;
    for(int j=0;j<n;j++,i++){
        if(i%3 == 0) cout << "Red";
        else if(i%3 == 1) cout << "Green";
        else cout << "Blue";
        cout << ' ';
    }
}