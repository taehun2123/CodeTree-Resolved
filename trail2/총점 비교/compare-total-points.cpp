#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<string, tuple<int, int, int>>> t;
int main() {
    cin >> n;
    for(int i = 0; i<n; i++){
        string name_; int s1, s2, s3;
        cin >> name_ >> s1 >> s2 >> s3;
        t.push_back({name_, {s1, s2, s3}});
    }

    sort(t.begin(), t.end(), [](const pair<string, tuple<int, int, int>>& v1, const pair<string, tuple<int, int, int>>& v2){
        int su1, su2, su3, su4, su5, su6;
        tie(su1, su2, su3) = v1.second;
        tie(su4, su5, su6) = v2.second;
        return su1+su2+su3 < su4+su5+su6;
    });
    for(auto e:t){
        int s_, s_2, s_3;
        tie(s_, s_2, s_3) = e.second;
        cout << e.first << " " << s_ << " " << s_2 << " " << s_3 <<"\n";
    }
    return 0;
}