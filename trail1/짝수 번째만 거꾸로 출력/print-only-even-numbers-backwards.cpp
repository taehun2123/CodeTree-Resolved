#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
    cin >> str;
    for(int i = str.length()-1; i>=0; i--){
        if(i%2==1) cout << str[i];
    }
    return 0;
}