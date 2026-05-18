#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a, b, c;
    cin >> a >> b >> c;
    cout << max(static_cast<int>(a.size()), max(static_cast<int>(b.size()), static_cast<int>(c.size()))) - min(static_cast<int>(a.size()), min(static_cast<int>(b.size()), static_cast<int>(c.size())));
    return 0;
}