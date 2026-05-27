#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
    cin >> a >> b >> c;
    int sum = (a*24*60) + (b*60) + c;
    int st = (11*24*60) + (11*60) + 11;
    if(sum-st < 0) cout << -1;
    else cout << sum - st;
    return 0;
}