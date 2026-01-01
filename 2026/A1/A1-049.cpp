// Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n;
    int flr = 13;
    int nd = 0, rd = 0;
    for (int i = 0; i < 5; i++) {
        if (n[i] - '0' > 5) {
            flr = i + 9;
            if(i == 4)
                flr++;
            break;
        }
    }
    string rev = n;
    reverse(rev.begin(), rev.end());
    if (n == rev) {
        if ((n[0] - '0') + (n[4] - '0') > 5)
            nd = 1;
        else if ((n[1] - '0') * (n[3] - '0') > 5)
            nd = 2;
    } else {
        if ((n[4] - '0' > 0) && ((n[0] - '0') % (n[4] - '0') > 5))
            nd = 1;
        else if ((n[1] - '0') - (n[4] - '0') > 5)
            nd = 2;
    }
    if ((n[0] - '0') + (n[1] - '0') + (n[2] - '0') + (n[3] - '0') + (n[4] - '0') > 25)
        rd = 1;
    else if ((n[0] - '0') * (n[1] - '0') * (n[2] - '0') * (n[3] - '0') * (n[4] - '0') > 25)
        rd = 2;
    cout << flr << nd << rd;
}