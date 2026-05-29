#include <bits/stdc++.h>
using namespace std;
#define OFFSET 100
int arr[201][201];
int n;
int main() {
    cin >> n;
    for(int i = 0; i<n; i++){
        int x, y;
        cin >> x >> y;
        x += OFFSET;
        y += OFFSET;
        for(int i = x; i<x+8; i++){
            for(int j = y; j<y+8; j++){
                arr[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i<201; i++)
        for(int j = 0; j<201; j++)
            if(arr[i][j] == 1) cnt++;


    cout << cnt;

    return 0;
}