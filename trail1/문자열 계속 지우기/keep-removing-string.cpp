#include <iostream>
using namespace std;
string str;
string sstr;
int main() {
    cin >> str >> sstr;
    while(str.find(sstr) != string::npos){
        str.erase(str.find(sstr), sstr.length());
    }
    cout << str;
    return 0;
}