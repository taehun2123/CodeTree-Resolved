#include <iostream>
using namespace std;
string str, cmd;
int main() {
    cin >> str >> cmd;
    for(auto ch : cmd){
        if(ch == 'L'){
            str = str.substr(1, str.length()-1) + str.substr(0, 1);
        }
        if(ch == 'R'){
            str = str.substr(str.length()-1, 1) + str.substr(0, str.length()-1);
        }
    }
    cout << str;
    return 0;
}