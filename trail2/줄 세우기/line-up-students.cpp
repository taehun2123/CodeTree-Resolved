#include <bits/stdc++.h>
using namespace std;
int n;
vector<tuple<int, int, int>> t;
int main() {
    cin >> n;
    for(int i = 0; i<n; i++){
        int h, w;
        cin >> h >> w;
        t.push_back({h, w, i+1});
    }
    sort(t.begin(), t.end(), [](const tuple<int,int,int>& t1, const tuple<int,int,int>& t2){
        int h1,w1,i1,h2,w2,i2;
        tie(h1,w1,i1) = t1;
        tie(h2,w2,i2) = t2;
        if(h1==h2){
            if(w1==w2) return i1 < i2;
            else return w1 > w2;
        }
        return h1 > h2;
        
    });
    for(auto e:t){
        int h_, w_, i_;
        tie(h_, w_, i_) = e;
        cout << h_ << " " << w_ << " " << i_ << "\n";
    }
    return 0;
}