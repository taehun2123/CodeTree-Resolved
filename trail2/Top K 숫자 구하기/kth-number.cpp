#include <bits/stdc++.h>
using namespace std;
int n, k, arr[1001];
int main() {
    cin >> n >> k;
    for(int i = 0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    cout << arr[k-1];
    return 0;
}