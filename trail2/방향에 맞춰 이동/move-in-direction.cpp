#include <bits/stdc++.h>
using namespace std;
int n;
int dx[4] = {1, 0, -1 ,0};
int dy[4] = {0, 1, 0, -1};
int main() {
    cin >> n;
    int x = 0, y = 0;
    for(int i = 0; i<n; i++){
        char dir; int dirl;
        cin >> dir >> dirl;
        if(dir == 'N'){
            x += dx[0] * dirl;
            y += dy[0] * dirl;
        } else if(dir == 'E'){
            x += dx[1] * dirl;
            y += dy[1] * dirl;
        } else if(dir == 'S'){
            x += dx[2] * dirl;
            y += dy[2] * dirl; 
        } else{
            x += dx[3] * dirl;
            y += dy[3] * dirl;
        }
    }
    cout << y << " " << x;
    return 0;
}