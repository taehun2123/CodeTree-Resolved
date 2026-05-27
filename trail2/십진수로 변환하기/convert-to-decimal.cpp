#include <bits/stdc++.h>
using namespace std;
string binary;
int b[9];
int main() {
    cin >> binary;
    for(int i = 0; i<binary.length(); i++){
        b[i] = binary[i] - '0';
    }
    int num = 0;
    
    for(int i = 0; i < binary.length(); i++)
        num = num * 2 + b[i];
    
    cout << num;
}
