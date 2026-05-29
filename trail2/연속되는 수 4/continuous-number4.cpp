#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1001];
int main() {
    cin >> n;
    int cn = 1;
    int cnt = 1;
    for(int i = 1; i<=n; i++){
        int x = 0;
        cin >> x;
        arr[i] = x;
        if(i-1 != 0 && arr[i-1] < arr[i]) cn++;
        else cn = 1;
        cnt = max(cnt, cn);
    }

    cout << cnt;
    
    return 0;
}