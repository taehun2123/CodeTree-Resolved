#include <bits/stdc++.h>
using namespace std;
string str;
int q;

int main() {
    cin >> str >> q;
    while(q--){
        int a;
        cin >> a;
        if(a==1){
            str = str.substr(1, str.length()-1) + str.substr(0, 1);
            cout << str << "\n";
        } else if(a==2){
            str = str.substr(str.length()-1, 1) + str.substr(0, str.length()-1);
            cout << str << "\n";
        } else {
            string termstr;
            for(int i = 0; i<str.length(); i++){
                termstr += str.substr(str.length()-(i+1), 1);
            }
            str = termstr;
            cout << str << "\n";
        }
    }
    return 0;
}