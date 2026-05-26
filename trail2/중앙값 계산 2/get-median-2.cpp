#include <bits/stdc++.h>
using namespace std;
int n, arr[100001], cnt;
int main() {
    cin >> n;
    cin >> arr[0];
    cout << arr[0] << ' ';
    for(int i = 1; i<=n; i++) {
        cin >> arr[i];
        sort(arr, arr+i+1);
        if(i%2==0)
            cout << arr[i/2] << ' ';
    }    

    return 0;
}