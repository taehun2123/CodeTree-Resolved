#include <iostream>
using namespace std;
string str;
int n, cnt;
int main() {
    cin >> n >> str;
    while(n--){
        string sr;
        cin >> sr;
        if(str == sr) cnt++;
    }

    cout << cnt;
    return 0;
}