//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int mixColor(int c1,int c2){
    return (c1 + c2) / 2;
}

void mixRGB(int r1,int b1, int g1, int r2, int b2, int g2,int &rMix, int &bMix, int &gMix){
    rMix = mixColor(r1, r2);
    bMix = mixColor(b1, b2);
    gMix = mixColor(g1, g2);
}

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int r1, b1, g1, r2, b2, g2;
    cin >> r1 >> b1 >> g1 >> r2 >> b2 >> g2;
    int rMix, bMix, gMix;
    mixRGB(r1, b1, g1, r2, b2, g2, rMix, bMix, gMix);
    cout << rMix << ' ' << bMix << ' ' << gMix;
}