//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int age;
    string day;
    cin >> age >> day;
    int ans = 150;
    if (age < 5) {
        cout << 0;
        return 0;
    }
    if(age <= 18)
        ans = 100;
    if(day == "Wed")
        ans /= 2;
    cout << ans;
}