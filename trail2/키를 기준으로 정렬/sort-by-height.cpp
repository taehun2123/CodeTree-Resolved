#include <bits/stdc++.h>
using namespace std;
int n;
vector<tuple<int, string, int>> t;
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        string name; int height, weight;
        cin >> name >> height >> weight;
        t.push_back({height, name, weight});
    } 
    sort(t.begin(), t.end());
    for(auto i : t){
        string name_; int height_; int weight_;
        tie(height_, name_, weight_) = i;
        cout << name_ << " " << height_ << " " << weight_ << "\n";
    }
    return 0;
}