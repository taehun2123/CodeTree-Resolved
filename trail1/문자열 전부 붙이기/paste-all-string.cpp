#include <bits/stdc++.h>
using namespace std;
string str[10];
string result;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; 
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> str[i];
        result += str[i];
    }
    cout << result;
    return 0;
}