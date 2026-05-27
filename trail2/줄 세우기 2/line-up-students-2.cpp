#include <bits/stdc++.h>
using namespace std;
int n;
vector<tuple<int, int, int>> v;
int main() {
    cin >> n;
    for(int i = 0; i<n; i++){
        int h, w;
        cin >> h >> w;
        v.push_back({h, w, i+1});
    }
    sort(v.begin(), v.end(), [](const tuple<int, int, int>& v1, const tuple<int,int,int>& v2){
        int h1,w1,i1,h2,w2,i2;
        tie(h1,w1,i1) = v1;
        tie(h2,w2,i2) = v2;
        if(h1==h2) return w1 > w2;
        return h1<h2;
    });
    
    for(auto e : v){
        int h, w, i;
        tie(h, w, i) = e;
        cout << h << " " << w << " " << i << "\n";
    }
    return 0;
}