//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int a, b;
    cin >> a;
    cin >> b;
    if((b == 12 && a >= 22) || (b == 1 && a <= 19))
        cout << "capricorn";
    else if((b == 1 && a >= 20) || (b == 2 && a <= 18))
        cout << "aquarius";
    else if((b == 2 && a >= 19) || (b == 3 && a <= 20))
        cout << "pisces";
    else if((b == 3 && a >= 21) || (b == 4 && a <= 19))
        cout << "aries";
    else if((b == 4 && a >= 20) || (b == 5 && a <= 20))
        cout << "taurus";
    else if((b == 5 && a >= 21) || (b == 6 && a <= 21))
        cout << "gemini";
    else if((b == 6 && a >= 22) || (b == 7 && a <= 22))
        cout << "cancer";
    else if((b == 7 && a >= 23) || (b == 8 && a <= 22))
        cout << "leo";
    else if((b == 8 && a >= 23) || (b == 9 && a <= 22))
        cout << "virgo";
    else if((b == 9 && a >= 23) || (b == 10 && a <= 23))
        cout << "libra";
    else if((b == 10 && a >= 24) || (b == 11 && a <= 21))
        cout << "scorpio";
    else if((b == 11 && a >= 22) || (b == 12 && a <= 21))
        cout << "sagittarius";
}