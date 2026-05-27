#include <bits/stdc++.h>
using namespace std;
int n;
vector<tuple<int, int, int>> t;
int main() {
    cin >> n;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        t.push_back({a, i+1, 0});
    }
    sort(t.begin(), t.end());
    for(int i = 0; i<n; i++){
        int a, b, c;
        tie(a, b, c) = t[i];
        c = i+1;
        t[i] = make_tuple(a, b, c);
    }
    sort(t.begin(), t.end(), [](const tuple<int,int,int>& t1, const tuple<int,int,int>& t2){
        int key1, key2;
        tie(ignore, key1, ignore) = t1;
        tie(ignore, key2, ignore) = t2;
        return key1 < key2;
    });
    for(auto e: t){
        int key;
        tie(ignore, ignore, key) = e;
        cout << key << " ";
    }

    return 0;
}