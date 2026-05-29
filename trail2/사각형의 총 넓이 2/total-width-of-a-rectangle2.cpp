#include <bits/stdc++.h>
using namespace std;
int n, cnt;
int arr[201][201];
int main() {
    cin >> n;
    for(int i = 0; i<n; i++){
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        for(int i = y1+100; i<y2+100; i++)
            for(int j = x1+100; j<x2+100; j++)
                arr[i][j] = 1;
    }
    for(int i = 0; i<=200; i++){
        for(int j = 0; j<=200; j++){
            if(arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}