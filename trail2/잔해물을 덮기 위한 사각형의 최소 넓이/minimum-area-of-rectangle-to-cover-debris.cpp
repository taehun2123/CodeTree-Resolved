#include <bits/stdc++.h>
using namespace std;
#define OFFSET 1000
int arr[2001][2001];
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    x2 += OFFSET;
    y1 += OFFSET;
    y2 += OFFSET;
    for(int i = x1; i<x2; i++){
        for(int j = y1; j<y2; j++){
            arr[i][j] = 1;
        }
    }
    int dx1, dy1, dx2, dy2;
    cin >> dx1 >> dy1 >> dx2 >> dy2;
    dx1 += OFFSET;
    dx2 += OFFSET;
    dy1 += OFFSET;
    dy2 += OFFSET;
    for(int i = dx1; i<dx2; i++){
        for(int j = dy1; j<dy2; j++){
            arr[i][j] = 0;
        }
    }

    int mnx=INT_MAX, mny=INT_MAX, mxx=-1, mxy=-1;
    for(int i = 0; i<2001; i++){
        for(int j = 0; j<2001; j++){
            if(arr[i][j] == 1){
                mxx = max(mxx, i);
                mnx = min(mnx, i);
                mxy = max(mxy, j);
                mny = min(mny, j);
            }
        }
    }
    int cnt = 0;
    if(mnx < INT_MAX && mny < INT_MAX && mxx > -1 && mxy > -1){
        for(int i = mnx; i<=mxx; i++)
            for(int j = mny; j<=mxy; j++)
                cnt++;
    }
    cout << cnt;

    
    return 0;
}