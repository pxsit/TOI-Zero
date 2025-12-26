//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

char tolow(char c){
    return tolower(static_cast<unsigned char>(c));
}

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.length();
    int mx = 0;
    bool found = false;
    if(n >= 3){
        for (int i = 0; i <= n - 3; i++){
            if(tolow(s[i]) == 'b' && tolow(s[i+1]) == 'u' && tolow(s[i+2]) == 'u'){
                found = true;
                int curr = 0;
                for (int j = i + 1; j < n; j++){
                    if(tolow(s[j]) == 'u'){
                        curr++;
                    }else{
                        break;
                    }
                }
                if(curr > mx){
                    mx = curr;
                }
            }
        }
    }
    if(found){
        cout << "Yes " << mx;
    }else{
        int idx = -1;
        for (int i = 0; i < n; i++){
            if(tolow(s[i]) == 'b'){
                idx = i;
                break;
            }
        }
        if(idx != -1){
            string ans = "";
            for (int i = 0; i <= idx; i++){
                ans += s[i];
            }
            for (int i = idx + 1; i < n; i++){
                ans += 'U';
            }
            cout << ans;
        }else{
            string ans = "";
            string pp = "BUU";
            for (int i = 0; i < n; i++){
                ans += pp[i % 3];
            }
            cout << ans;
        }
    }
}