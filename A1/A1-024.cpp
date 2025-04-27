//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int a, b;
    cin >> a;
    cin >> b;
    if(a <= 1990){
        if(b <= 1500){
            cout << 1250;
        }else if(b <= 2000){
            cout << 1400;
        }else{
            cout << 2000;
        }
    }else if(a >= 1991 && a <= 1999){
        if(b <= 1500){
            cout << 1100;
        }else if(b <= 2000){
            cout << 1300;
        }else{
            cout << 1700;
        }
    }else if(a >= 2000){
        if(b <= 1500){
            cout << 1000;
        }else if(b <= 2000){
            cout << 1200;
        }else{
            cout << 1500;
        }
    }
}