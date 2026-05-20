#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
    cin >> str;
    str.erase(1, 1); str.erase(str.length()-2, 1);
    cout << str;
    return 0;
}