#include <bits/stdc++.h>
using namespace std;
string str;

int q;
void swap(int& a, int& b){
    auto tmp = str[a-1];
    str[a-1] = str[b-1];
    str[b-1] = tmp;
    cout << str << "\n";
}

void allSwap(char& x, char& y){
    for(int i = 0; i<str.length(); i++){
        if(str[i] == x) str[i] = y;
    }
    cout << str << "\n";
}
int main() {
    cin >> str >> q;
    for(int i = 0; i<q; i++){
        int num;
        cin >> num;
        if(num == 1) {
            int a, b;
            cin >> a >> b;
            swap(a, b);
        }
        else {
            char x, y;
            cin >> x >> y;
            allSwap(x, y);
        }

    }
    return 0;
}