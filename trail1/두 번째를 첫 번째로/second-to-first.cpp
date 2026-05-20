#include <iostream>
using namespace std;
string str;
char b;
int main() {
    cin >> str;
    b = str[1];
    for(int i = 0; i<str.length(); i++){
        if(str[i] == b) str[i] = str[0];
    }
    cout << str;
    return 0;
}