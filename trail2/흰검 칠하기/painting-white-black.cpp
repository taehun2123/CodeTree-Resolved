#include <bits/stdc++.h>
using namespace std;
int n;
// L = 흰색 = 1, R = 검은색 = 2, 회색 3 
// 직전 카운트가 아니라 누적 카운트?
int arr[2000001];
int b[2000001];
int w[2000001];
int main() {
    cin >> n;
    int point = 1000000;
    for(int i = 0; i<n; i++){
        int x = 0; char key;
        cin >> x >> key;
        if(key == 'R'){
            for(int i = point; i<point+x; i++){
                if(arr[i] == 3 || (b[i] == 1 && w[i] >= 2)){
                    arr[i] = 3;
                    continue;
                } 
                else {
                    arr[i] = 2;
                    b[i]++;
                }
            }
            point += (x-1);
        }
        else if(key == 'L'){
            for(int i = point; i>point-x; i--){
                if(arr[i] == 3 || (b[i] >= 2 && w[i] == 1)){
                    arr[i] = 3;
                    continue;
                }
                else {
                    arr[i] = 1;
                    w[i]++;
                }
            }
            point -= (x-1);
        }
    }
    int w = 0, b = 0, g = 0;
    for(int i = 1; i<=2000000; i++){
        if(arr[i] == 1) w++;
        else if(arr[i] == 2) b++;
        else if(arr[i] == 3) g++;
    }
    cout << w << " " << b << " " << g;
    return 0;
}