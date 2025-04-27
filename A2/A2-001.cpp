//Author : PasitHexaHydride
#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second
struct Point{
    double x, y;
    Point(double _x, double _y) : x(_x), y(_y){}
};

bool solve(const Point &p1, const Point &p2, const Point &p3, const Point &p4){
    auto dirr = [](const Point &p, const Point &q, const Point &r) -> int{
        double val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
        if(val == 0)
            return 0;             
        return (val > 0) ? 1 : 2; 
    };
    auto oo = [](const Point &p, const Point &q, const Point &r) -> bool{
        return (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y));
    };
    int o1 = dirr(p1, p2, p3);
    int o2 = dirr(p1, p2, p4);
    int o3 = dirr(p3, p4, p1);
    int o4 = dirr(p3, p4, p2);
    if(o1 != o2 && o3 != o4)
        return true;
    if(o1 == 0 && oo(p1, p3, p2))
        return true;
    if(o2 == 0 && oo(p1, p4, p2))
        return true;
    if(o3 == 0 && oo(p3, p1, p4))
        return true;
    if(o4 == 0 && oo(p3, p2, p4))
        return true;

    return false;
}

int main(){ios::sync_with_stdio(false);cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> r(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++){
        cin >> r[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    if(r[0] != 0){
        r.insert(r.begin(), 0);
        n++;
    }
    if(b[0] != 0){
        b.insert(b.begin(), 0);
        m++;
    }
    vector<pair<Point, Point>> rr;
    for (int i = 0; i < n - 1; i++){
        int x1 = r[i];
        int x2 = r[i + 1];
        int y1 = (i % 2 == 0) ? 0 : 1; 
        int y2 = ((i + 1) % 2 == 0) ? 0 : 1;
        rr.push_back({Point(x1, y1), Point(x2, y2)});
    }
    vector<pair<Point, Point>> bb;
    for (int i = 0; i < m - 1; i++){
        int x1 = b[i];
        int x2 = b[i + 1];
        int y1 = (i % 2 == 0) ? 0 : 1; 
        int y2 = ((i + 1) % 2 == 0) ? 0 : 1;
        bb.push_back({Point(x1, y1), Point(x2, y2)});
    }
    set<pair<double, double>> in;
    if(r[0] == 0 && b[0] == 0) in.insert({0, 0});
    for (const auto &ar : rr){
        for (const auto &ab : bb){
            if((ar.st.x == ab.st.x && ar.st.y == ab.st.y) ||(ar.st.x == ab.nd.x && ar.st.y == ab.nd.y) ||(ar.nd.x == ab.st.x && ar.nd.y == ab.st.y) ||(ar.nd.x == ab.nd.x && ar.nd.y == ab.nd.y)){
                Point cc = (ar.st.x == ab.st.x && ar.st.y == ab.st.y) ? ar.st : (ar.st.x == ab.nd.x && ar.st.y == ab.nd.y) ? ar.st: (ar.nd.x == ab.st.x && ar.nd.y == ab.st.y)   ? ar.nd: ar.nd;
                in.insert({cc.x, cc.y});
            }
            else if(solve(ar.st, ar.nd, ab.st, ab.nd)){
                double a1 = ar.nd.y - ar.st.y;
                double b1 = ar.st.x - ar.nd.x;
                double c1 = a1 * ar.st.x + b1 * ar.st.y;
                double a2 = ab.nd.y - ab.st.y;
                double b2 = ab.st.x - ab.nd.x;
                double c2 = a2 * ab.st.x + b2 * ab.st.y;
                double det = a1 * b2 - a2 * b1;
                if(det != 0){
                    double x = (b2 * c1 - b1 * c2) / det;
                    double y = (a1 * c2 - a2 * c1) / det;
                    in.insert({x, y});
                }
            }
        }
    }
    cout << in.size();
}