//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;;
    cout << "10 = " << n/10 << '\n';
    n%=10;
    cout << "5 = " << n/5 << '\n';
    n%=5;
    cout << "2 = " << n/2 << '\n';
    n%=2;
    cout << "1 = " << n;
}
