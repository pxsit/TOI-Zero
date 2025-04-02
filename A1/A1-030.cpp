//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n == 1){
        int a, b;
        cin >> a >> b;
        cout << max(a,b);
        return 0;
    }
    int c = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        c += max(a,b);
        cout << max(a,b);
        if(i != n-1) cout << " + ";
        else cout << " = " << c;
    }
}