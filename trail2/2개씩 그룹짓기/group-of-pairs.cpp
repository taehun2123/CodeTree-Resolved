#include <bits/stdc++.h>
using namespace std;
int n, arr[2001], maximum = 0;
int main() {
    cin >> n;
    for(int i = 0; i<2*n; i++) cin >> arr[i];
    sort(arr, arr+2*n);
    for(int i = 0; i<2*n; i++){
        int group = arr[(2*n-1)-i] + arr[i];
        if(maximum < group) maximum = group;
    }

    cout << maximum;

    return 0;
}