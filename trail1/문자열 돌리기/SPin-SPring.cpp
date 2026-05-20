#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
    cin >> str;
    cout << str << "\n";
    for(int i = 0; i<str.length(); i++){
        string s = str.substr(str.length()-(i+1), i+1) + str.substr(0, str.length()-(i+1));
        cout << s << "\n";
    }
    return 0;
}