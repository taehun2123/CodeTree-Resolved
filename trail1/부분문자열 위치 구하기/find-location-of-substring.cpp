#include <bits/stdc++.h>
using namespace std;
string str;
string fstr;
int main() {
    cin >> str >> fstr;
    int idx = -1;
    if(str.find(fstr) != string::npos) idx = str.find(fstr);
    cout << idx;
    return 0;
}