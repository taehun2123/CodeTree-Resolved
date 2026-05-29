#include <bits/stdc++.h>
using namespace std;
int arr[2001][2001];
#define OFFSET 1000
int main() {
    for(int i = 0; i<2; i++){
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        y1 += OFFSET;
        y2 += OFFSET;
        x1 += OFFSET;
        x2 += OFFSET;
        for(int i = y1; i<y2; i++){
            for(int j = x1; j<x2; j++){
                arr[i][j] = 1;
            }
        }
    }
    int y1, x1, y2, x2;
    cin >> y1 >> x1 >> y2 >> x2;
    y1 += OFFSET;
    y2 += OFFSET;
    x1 += OFFSET;
    x2 += OFFSET;
    for(int i = y1; i<y2; i++){
        for(int j = x1; j<x2; j++){
            if(arr[i][j] == 1) arr[i][j] = 0;
        }
    }
    int cnt = 0;
    for(int i = 0; i<2001; i++){
        for(int j = 0; j<2001; j++){
            if(arr[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}