#include <bits/stdc++.h>
using namespace std;
int n;
string str[101];
int main() {
    cin >> n;
    for(int i = 0; i<n; i++) cin >> str[i];
    sort(str, str+n);
    for(int i = 0; i<n; i++) cout << str[i] << "\n";
    return 0;
}