#include <bits/stdc++.h>
using namespace std;
string str, strb;
int cnt;
int main() {
    cin >> str >> strb;
    for(int i = 0; i<str.length(); i++) if(str.substr(i, 2) == strb) cnt++;
    cout << cnt;
    return 0;
}