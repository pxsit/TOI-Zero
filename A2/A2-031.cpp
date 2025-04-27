// Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    vector<char> s1(n), s2(n);
    for(int i = 0; i < n; i++) cin >> s1[i];
    for(int i = 0; i < n; i++) cin >> s2[i];
    int m;
    cin >> m;
    while(m--){
        int a, b;
        char c;
        cin >> a >> b >> c;
        if(a == 1) s1[b] = c;
        else s2[b] = c;
    }
    for(int i = 0; i < n; i++){
        cout << s1[i] <<(i + 1 < n ? ' ' : '\n');
    }
    for(int i = 0; i < n; i++){
        cout << s2[i] <<(i + 1 < n ? ' ' : '\n');
    }
    int mismatch = 0;
    for(int i = 0; i < n; i++){
        char a = s1[i], b = s2[i];
        if(!((a == 'A' && b == 'T') ||(a == 'T' && b == 'A') ||(a == 'C' && b == 'G') ||(a == 'G' && b == 'C')))
            mismatch++;
    }
    cout << mismatch;
}