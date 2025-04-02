//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string a = to_string(n);
    for (int i = 0; i < a.length(); i++){
        cout << a[i];
        if(i == a.length() - 4){
            cout << ',';
        }
    }
}