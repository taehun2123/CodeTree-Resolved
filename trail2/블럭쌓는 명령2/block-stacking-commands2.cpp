#include <bits/stdc++.h>
using namespace std;
int n, k;
int arr[101];
int main() {
    cin >> n >> k;
    for(int i = 0; i<k; i++){
        int a = 0, b = 0;
        cin >> a >> b;
        for(; a<=b; a++){
            ++arr[a];
        }
    }
    int maxie = 0;
    for (int i = 1; i<=n; i++){
        maxie = max(maxie, arr[i]);
    }
    cout << maxie;
    return 0;
}