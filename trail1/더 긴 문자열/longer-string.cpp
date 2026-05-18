#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.size() > str2.size()) cout << str1 << " " << str1.size();
    else if(str1.size() < str2.size()) cout << str2 << " " << str2.size();
    else cout << "same";
    return 0;
}