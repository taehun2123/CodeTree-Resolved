#include <iostream>
using namespace std;
string str;
char a, b;
int main() {
    cin >> str;
    a = str[0];
    b = str[1];
    for(int i = 0; i<str.length(); i++){
        if(str[i] == a) str[i] = b;
        else if(str[i] == b) str[i] = a;
    }
    cout << str;
    return 0;
}