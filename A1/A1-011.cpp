//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if(s.empty()) return 0;
    int c = 1;
    for (int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            c++;
        } else{
            cout << c << s[i - 1];
            c = 1;
        }
    }
    cout << c << s.back();
}



