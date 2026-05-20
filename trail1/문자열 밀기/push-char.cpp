#include <bits/stdc++.h>
using namespace std;
string str;
string s;
int main() {
    cin >> str;
    s = str.substr(1) + str.substr(0, 1);
    cout << s;
    return 0;
}