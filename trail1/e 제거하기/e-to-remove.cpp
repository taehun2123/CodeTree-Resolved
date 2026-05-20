#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
    cin >> str;
    str.erase(str.find('e'), 1);
    cout << str;
    return 0;
}