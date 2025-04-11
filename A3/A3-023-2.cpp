/*
Toi-zero
Author : Rhael
Task : A3-023
*/
#include <iostream>
#include <vector>
using namespace std;
int A,B;
vector<int> Prime;
int notPrime[15005];
int cnt=0;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> A >> B;
    Prime.emplace_back(2);
    for(int i=3;i<=3*B;i++){
        if(notPrime[i]) continue;
        Prime.emplace_back(i);
        for(int j=i;j<=3*B;j+=i) notPrime[j]=1;
    }
    for(int i=A;i<=B;i++){
        for(int P:Prime){
            if(P<3*i || P-i>2*B) continue;
            cnt+=min((P-3*i)/2+1,B-(P-i)/2+((P-i)%2==0));
        }
    }
    cout << cnt;
    return 0;
}
