#include <bits/stdc++.h>
using namespace std;
string str[4];
int main() {
    cin.tie(0)->sync_with_stdio(0);
    for(int i = 0; i<4; i++){
        cin >> str[i];
    }
    for(int i = 3; i>=0; i--){
        cout << str[i] << "\n";
    }

    return 0;
}