#include <bits/stdc++.h>
using namespace std;
string str[10];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int result = 0;
    for(int i = 0; i<10; i++){
        cin >> str[i];
    }
    for(int i = 0; i<10; i++){
        result += str[i].length();
    }
    cout << result;
    return 0;
}