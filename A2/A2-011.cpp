//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a; 
    unordered_set<int> s; 
    for (int i = 0; i < 10; i++){
        int x;
        cin >> x;
        if(s.find(x) == s.end()){
            a.push_back(x);
            s.insert(x);
        }
    }
    for (int i = 0; i < a.size(); i++){
        cout << a[i];
        if(i < a.size() - 1){
            cout << " ";
        }
    }
}