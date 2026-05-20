#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
    cin >> str;
    if(str.find("ee") != string::npos) cout << "Yes" << ' ';
    else cout << "No" << ' ';
    if(str.find("ab") != string::npos) cout << "Yes" << ' ';
    else cout << "No" << ' ';
    return 0;
}