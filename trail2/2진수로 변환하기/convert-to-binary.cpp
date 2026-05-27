#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int digits[100001] = {};
    int cnt = 0;
    if(n == 0){
        cout << 0; 
        return 0; 
    } 
    while (true) {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % 2;
        n /= 2;
    }
    
    // print binary number
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
}
