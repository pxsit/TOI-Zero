//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    int sum = 0,even = 0,odd = 0;
    while(n--){
        int x;
        cin >> x;
        sum += x;
        if(x % 2 == 0) even++;
        else odd++;
    }
    cout << "SUM " << sum << '\n' << "EVEN " << even << '\n' << "ODD " << odd;
}