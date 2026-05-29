#include <bits/stdc++.h>
using namespace std;
int n, t;
int arr[1001];
int main() {
    int cnt = 0, cn = 0;
    cin >> n >> t;
    for(int i = 1; i<=n; i++){
        int x = 0;
        cin >> x;
        arr[i] = x;
        if(x > t){
            if(arr[i-1] > t) cn++;
            else cn = 1;
        } 
        else cn = 0;
        cnt = max(cnt, cn);
    }

    cout << cnt;
    return 0;
}