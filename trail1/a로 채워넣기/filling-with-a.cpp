#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
    cin >>str;
    str[1] = 'a';
    str[str.length()-2] = 'a';
    cout << str;
    return 0;
}