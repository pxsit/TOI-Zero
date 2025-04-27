//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if (j == 0 || j == i || i == n-1)
                cout << "0 ";
            else
                cout << "1 ";
        }
        cout << '\n';
    }
}