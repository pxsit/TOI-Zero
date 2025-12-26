//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

bool solve(char c){
    char lc = tolower(c);
    return lc == 'l' || lc == 'o' || lc == 'v' || lc == 'e';
}

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    string oa = a, ob = b;
    int n1 = a.length();
    int n2 = b.length();
    if(n1 < n2){
        int diff = n2 - n1;
        for (int i = 0; i < diff; ++i){
            a += oa[i % oa.length()];
        }
        n1 = n2; 
    }else if(n2 < n1){
        int diff = n1 - n2;
        for (int i = 0; i < diff; ++i){
            b += ob[i % ob.length()];
        }
        n2 = n1; 
    }
    int n = n1; 
    string str = "";
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        if(solve(a[i]) || solve(b[i])){
            str += 'w';
            cnt++;
        }else{
            str += '$';
        }
    }
    if(cnt % 2 != 0){
        int mx = 0;
        int curr = 0;
        for (int i = 0; i < n; ++i){
            if(str[i] == 'w'){
                curr++;
            }else{
                mx = max(mx, curr);
                curr = 0;
            }
        }
        mx = max(mx, curr); 
        if(mx > 0){
            str += to_string(mx);
        }
    }else{
        bool found = false;
        if(n >= 2){
            for (int i = 0; i < n - 1; ++i){
                if(str[i] == 'w' && str[i+1] == 'w'){
                    found = true;
                    break;
                }
            }
        }
        if(!found){
            str += '#';
        }
    }
    cout << str;
}