#include <bits/stdc++.h>
using namespace std;
vector<tuple<int, int, int>> t;
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        t.push_back({x, y, i+1});
    }

    sort(t.begin(), t.end(), [](const tuple<int, int, int>& t1, const tuple<int, int, int>& t2){
        int x1, y1, i1, x2, y2, i2;
        tie(x1, y1, i1) = t1;
        tie(x2, y2, i2) = t2;
        if((abs(x1-0)+abs(y1-0)) == (abs(x2-0)+abs(y2-0))) return i1<i2;
        return (abs(x1-0)+abs(y1-0)) < (abs(x2-0)+abs(y2-0));
    });
    for(auto e: t){
        int idx;
        tie(ignore, ignore, idx) = e;
        cout << idx << "\n";
    }
    return 0;
}