//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ ios::sync_with_stdio(false); cin.tie(nullptr);
    int a;
    char b;
    cin >> a;
    cin >> b;
    b = toupper(b);
    double c = a;
    if(b == 'F'){
        c = (a - 32) * 5.0 / 9.0;
    }
    if(c <= 0){
        cout << "solid";
    } else if(c < 100){
        cout << "liquid";
    } else{
        cout << "gas";
    }
}