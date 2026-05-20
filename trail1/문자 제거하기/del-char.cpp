#include <bits/stdc++.h>
using namespace std;
string str;
int main() {
    cin >> str;
    while(str.length() > 1){
        int ridx;
        cin >> ridx;
        if(ridx >= str.length()) str.erase(str.length()-1, 1);
        else str.erase(ridx, 1);
        cout << str << "\n";
    }
    return 0;
}