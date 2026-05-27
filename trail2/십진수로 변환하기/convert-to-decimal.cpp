#include <bits/stdc++.h>
using namespace std;
string binary;
int b[9];
int main() {
    cin >> binary;
    int num = 0;
    
    for(int i = 0; i < binary.length(); i++)
        num = num * 2 + (binary[i] - '0');
    
    cout << num;
}
