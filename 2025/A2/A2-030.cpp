//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    int oddrow = -1, oddcol = -1;
    for(int i = 0; i < 5 && (oddrow == -1 || oddcol == -1); i++){
        int rowsum = 0, colsum = 0;
        for(int j = 0; j < 5; j++){
            rowsum += arr[i][j];
            colsum += arr[j][i];
        }
        if(rowsum % 2 != 0){
            oddrow = i;
        }
        if(colsum % 2 != 0){
            oddcol = i;
        }
    }
    cout << oddrow << " " << oddcol;
}