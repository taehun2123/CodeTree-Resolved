#include <bits/stdc++.h>
using namespace std;
#define OFFSET 1000
int n;
int arr[2001];
int main() {
    cin >> n;
    int cnt = 1;
    int cn = 1;
    arr[0] = 1000;
    for(int i = 1; i<=n; i++){
        int x = 0;
        cin >> x;
        x += OFFSET;
        arr[i] = x;
        if(arr[i] < 1000 && arr[i-1] < 1000) cn++;
        else if(arr[i] > 1000 && arr[i-1] > 1000) cn++;
        else cn = 1;
        cnt = max(cnt, cn);
    }

    cout << cnt;
    return 0;
}