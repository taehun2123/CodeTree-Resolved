#include <bits/stdc++.h>
using namespace std;
string dir;
int dx[4] = {1, 0 , -1, 0};
int dy[4] = {0, 1, 0, -1};
int main() {
    int x = 0, y = 0, dir_num = 0;
    cin >> dir;
    for(auto ch : dir){
        if(ch == 'L'){
            dir_num = (dir_num - 1 + 4) % 4;
        }
        if(ch == 'R'){
            dir_num = (dir_num + 1) % 4;
        }
        if(ch == 'F'){
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }

    cout << y << " " << x;
    return 0;
}