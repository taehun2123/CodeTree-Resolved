#include <bits/stdc++.h>
using namespace std;
string str;
string desStr;
int cnt;
int main() {
    cin >> str >> desStr;
    while(true){
        ++cnt;
        str = str.substr(str.length()-1, 1) + str.substr(0, str.length()-1);
        if(str == desStr) break;
        if(cnt > str.length()){
            cout << -1;
            return 0;
        }
    }
    cout << cnt;
    return 0;
}