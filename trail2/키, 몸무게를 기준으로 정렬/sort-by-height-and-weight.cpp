#include <bits/stdc++.h>
using namespace std;
vector<tuple<string, int, int>> t;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string name; int h, w;
        cin >> name >> h >> w;
        t.push_back({name, h, w});
    }
    sort(t.begin(), t.end(), [](const tuple<string, int, int>& t1, const tuple<string, int, int>& t2){
        int h1, h2, w1, w2;
        tie(ignore, h1, w1) = t1;
        tie(ignore, h2, w2) = t2;
        if(h1==h2) return w1 > w2;
        return h1 < h2;
    });
    for(auto e:t){
        string name_; int h_; int w_;
        tie(name_, h_, w_) = e;
        cout << name_ << " " << h_ << " " << w_ <<"\n";
    }
    return 0;
}