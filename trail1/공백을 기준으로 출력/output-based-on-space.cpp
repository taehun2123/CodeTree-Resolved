#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string str1, str2, result;
    getline(cin, str1);
    getline(cin, str2);
    for(auto& ch : str1){
        if(ch == ' ') continue;
        result += ch;
    }
    for(auto& ch : str2){
        if(ch == ' ') continue;
        result += ch;
    }
    cout << result;
    return 0;
}