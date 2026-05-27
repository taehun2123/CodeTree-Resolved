#include <bits/stdc++.h>
using namespace std;
vector<pair<string, tuple<int, int, int>>> v;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string name; int kr, en, math;
        cin >> name >> kr >> en >> math;
        v.push_back({name, {kr, en, math}});
    }
    sort(v.begin(), v.end(), [](const pair<string, tuple<int, int, int>>& v1, const pair<string, tuple<int,int,int>>& v2){
        return v1.second > v2.second;
    });
    for(auto e: v){
        int kor, eng, ma;
        tie(kor, eng, ma) = e.second;
        cout << e.first << " " <<  kor << " " <<  eng << " " << ma <<"\n";
    }
    return 0;
}