#include <bits/stdc++.h>
using namespace std;
int arr[201];
int n;
int main() {
    cin >> n;
    for(int i = 0; i<n; i++){
        int a=0, b=0;
        cin >> a >> b;
        for(; a<b; a++){
            arr[a+100]++;
        }
    }
    int maxi = 0;
    for(int i = 1; i<=200; i++){
        maxi = max(maxi, arr[i]);
    }
    cout << maxi;
    return 0;
}