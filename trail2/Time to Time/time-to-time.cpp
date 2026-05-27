#include <bits/stdc++.h>
using namespace std;
int h1, m1, h2, m2, t1, t2;
int main() {
    cin >> h1 >> m1 >> h2 >> m2;
    h1 *= 60;
    h2 *= 60;
    t1 = h1 + m1;
    t2 = h2 + m2;
    cout << t2 - t1;
    
    
    return 0;
}