//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.length();
    if (n == 0){
        cout << "no 0";
        return 0;
    }
    string ss = "";
    bool it = true;
    for (int i = 0; i < n; i++){
        char u = toupper(s[i]);
        if (u != 'R' && u != 'A' && u != 'B' && u != 'I' && u != 'T'){
            cout << "no " << i;
            return 0;
        }
        ss += u;
        if (u != 'I' && u != 'T') it = false;
    }
    if (it){
        cout << "unknown " << n;
        return 0;
    }
    int mx = 0,curr = 0;
    for (int i = 0; i < n; i++){
        char c = ss[i], nxt = (i + 1 < n) ? ss[i + 1] : '\0', prev = (i > 0) ? ss[i - 1] : '\0';  
        if (c == 'R'){
            if (nxt != 'A'){
                cout << "no " << min(i+1,n-1);
                return 0;
            }
            curr = 0; 
        }else if (c == 'A'){
            if (prev != 'R' && prev != 'A'){
                cout << "no " << i;
                return 0;
            }
            if (prev == 'A')
                curr++;
            else 
                curr = 1;
            mx = max(mx, curr);
        }else if (c == 'B'){
            if (nxt != 'I' && nxt != 'T'){
                cout << "no " << min(i+1,n-1);
                return 0;
            }
            curr = 0; 
        }else if (c == 'I' || c == 'T'){
            curr = 0; 
        }
    }
    cout << "yes " << mx;
}
