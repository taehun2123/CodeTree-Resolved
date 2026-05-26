#include <bits/stdc++.h>
using namespace std;
string str, str2;
int main() {
    cin >> str >> str2;
    sort(str.begin(), str.end());
    sort(str2.begin(), str2.end());
    if(str != str2) cout << "No";
    else cout << "Yes";
    return 0;
}