#include <bits/stdc++.h>
using namespace std;
string str;
int len;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> str >> len;
    int llen = str.length() < len ? 0 : str.length()-len;
    for(int i = str.length()-1; i>=llen; i--){
        cout << str[i];
    }
    return 0;
}