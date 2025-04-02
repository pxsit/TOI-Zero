//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a = 0;
    while(true){
        int n;
        cin >> n;
        if(n == 5) break;
        if(n == 1) a+=100;
        else if(n == 2) a+=120;
        else if(n == 3) a+=200;
        else if(n == 4) a+=60;
    }
    cout << "Bye Bye" << '\n' << "Total Calories: " << a;
}