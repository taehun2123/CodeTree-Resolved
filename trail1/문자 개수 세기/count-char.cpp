#include <iostream>
using namespace std;
string str;
char key;
int cnt = 0;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    getline(cin, str);
    cin >> key;
    for(auto& ch : str){
        if(ch == key) cnt++;
    }
    cout << cnt;
    return 0;
}