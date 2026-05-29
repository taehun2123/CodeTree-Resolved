#include <bits/stdc++.h>
using namespace std;
int n;
int arr[101];
int main() {
    cin >> n;
    for(int i = 0; i<n; i++){
        int a, b;
        cin >> a >> b;
        for(; a<=b; a++) ++arr[a];
    }
    int maxi = 0;
    for(int i = 1; i<101; i++){
        maxi = max(maxi, arr[i]);
    }
    cout << maxi;
    // Please write your code here.
    return 0;
}