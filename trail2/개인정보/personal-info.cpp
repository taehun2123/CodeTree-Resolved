#include <bits/stdc++.h>
using namespace std;
vector<tuple<string, int, double>> t;
int main() {
    cout << fixed << setprecision(1);
    for(int i = 0; i<5; i++){
        string name; int h; double w;
        cin >> name >> h >> w;
        t.push_back({name, h, w});
    }
    sort(t.begin(), t.end(), [](const tuple<string, int, double>& t1, const tuple<string, int, double>& t2){
        string name1, name2;
        tie(name1, ignore, ignore) = t1;
        tie(name2, ignore, ignore) = t2;
        return name1 < name2;
    });
        cout << "name" << "\n";
    for(auto e:t){
        string name_; int h_; double w_;
        tie(name_, h_, w_) = e;
        cout << name_ << " " << h_ << " " << w_ <<"\n";
    }
    sort(t.begin(), t.end(), [](const tuple<string, int, double>& t1, const tuple<string, int, double>& t2){
        int h1, h2;
        tie(ignore, h1, ignore) = t1;
        tie(ignore, h2, ignore) = t2;
        return h1 > h2;
    });
        cout << "\nheight" << "\n";
    for(auto e:t){
        string name_; int h_; double w_;
        tie(name_, h_, w_) = e;
        cout << name_ << " " << h_ << " " << w_ <<"\n";
    }
    return 0;
}