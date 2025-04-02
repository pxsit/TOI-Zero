//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;

int main(){
    int W, H, M, N;
    cin >> W >> H >> M >> N;

    vector<int> x(M), y(N);
    for (int i = 0; i < M; i++) cin >> x[i];
    for (int i = 0; i < N; i++) cin >> y[i];

    x.insert(x.begin(), 0); x.push_back(W);
    y.insert(y.begin(), 0); y.push_back(H);
    
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    vector<int> width, height;
    for (int i = 1; i < x.size(); i++) width.push_back(x[i] - x[i - 1]);
    for (int i = 1; i < y.size(); i++) height.push_back(y[i] - y[i - 1]);
    
    sort(width.rbegin(), width.rend());
    sort(height.rbegin(), height.rend());
    
    int max1 = width[0] * height[0];
    int max2 = max(width[0] * height[1], width[1] * height[0]);
    
    cout << max1 << " " << max2 << '\n';
    
    return 0;
}
