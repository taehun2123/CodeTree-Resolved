#include <iostream>
using namespace std;
string str;
int main() {
    while(true){
        cin >> str;
        if(str == "END") break;
        for(int i = str.length()-1; i>=0; i--) cout << str[i];
        cout <<"\n";
    }
    return 0;
}