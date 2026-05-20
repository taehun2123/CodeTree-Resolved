#include <bits/stdc++.h>
using namespace std;
string str;
int ee, eb;
int main() {
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        if(str.substr(i, 2) == "ee") ee++;
        else if(str.substr(i,2) == "eb") eb++;
    }
    cout << ee << ' ' << eb;
    return 0;
}