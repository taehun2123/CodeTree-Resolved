#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string a, b;
    cin >> a >> b;
    string pl = a+b;
    string mi = b+a;
    if(pl.length() == mi.length()){
        for(int i = 0; i<max(pl.length(), mi.length()); i++){
            if(pl[i] != mi[i]) {
                cout << "false";
                return 0;
            }
        }
        cout << "true"; return 0;
    } else cout << "false";
    return 0;
}