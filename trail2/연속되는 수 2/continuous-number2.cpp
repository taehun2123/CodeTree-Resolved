#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1001];
int main() {
    cin >> n;
    int cnt = 0;
    int cn = 1;
    for(int i = 1; i<=n; i++){
        int x = 0;
        cin >> x;
        arr[i] = x;
        if(arr[i] == arr[i-1]){
            cn++;  
            cnt = max(cnt, cn);
        } 
        else cn = 1;
    }
    cnt = max(cnt, cn);
    cout << cnt;
    return 0;
}