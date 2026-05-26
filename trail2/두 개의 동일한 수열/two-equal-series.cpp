#include <bits/stdc++.h>
using namespace std;
int n, arr[101], arr2[101];
int main() {
    cin >> n;
    for(int i = 0; i<n; i++) cin >> arr[i];
    for(int i = 0; i<n; i++) cin >> arr2[i];
    sort(arr, arr+n); sort(arr2, arr2+n);
    bool flag = 1;
     for(int i = 0; i<n; i++){
        if(arr[i] != arr2[i]) flag = 0;
     }
     if(flag) cout << "Yes";
     else cout << "No";
    // Please write your code here.
    return 0;
}