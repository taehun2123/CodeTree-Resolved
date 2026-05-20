#include <iostream>
using namespace std;
string str;
char key;
int main() {
    cin >> str >> key;
    if(str.find(key) != string::npos) cout << str.find(key);
    else cout << "No";
    return 0;
}