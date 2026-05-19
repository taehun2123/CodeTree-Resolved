#include <bits/stdc++.h>
#include <sstream>
using namespace std;
string str;
string result;
int cnt = 1;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> str;
    result += static_cast<char>(str[0]);
    for(int i = 1; i<=str.length(); i++){
        if(str[i-1] == str[i]) cnt++;
        else if(str[i]){
            ostringstream oss; oss << cnt;
            result += oss.str();
            result += str[i];
            cnt = 1;
        }
    }
    ostringstream oss; oss << cnt;
    result += oss.str();
    cout << result.length() <<  "\n" << result;
    return 0;
}