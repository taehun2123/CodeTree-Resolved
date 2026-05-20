#include <bits/stdc++.h>
#include <sstream>
using namespace std;
string str[11];
string tokens;
string result;
int main() {
    int cnt = 0;
    cin >> cnt;
    for(int i = 0; i<cnt; i++) {
        cin >> str[i];
        for(int j = 0; j<str[i].length(); j++)
            tokens += str[i][j];
    }

    for(int i = 0; i<tokens.length(); i++){
        if(i != 0 && i%5 == 0) {
            cout << "\n" << tokens[i];
        }
        else cout << tokens[i];
    }
    return 0;
}