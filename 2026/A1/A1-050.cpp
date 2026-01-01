//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int men = 0, women = 0;
    while (true) {
        int x;
        cin >> x;
        if(x < 0)
            break;
        if(x%2 == 0)
            women++;
        else
            men++;
    }
    cout << men << ' ' << women << ' ' << men + women;
}