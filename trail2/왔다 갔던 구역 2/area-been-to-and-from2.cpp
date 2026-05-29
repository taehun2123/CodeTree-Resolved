#include <bits/stdc++.h>
using namespace std;
int n;
int arr[2001];
int main() {
    cin >> n;
    int point = 1000;
    for(int i = 0; i<n; i++){
        int k = 0; char dir;
        cin >> k >> dir;
        if(dir == 'R'){
            for(int i = point; i<(point+k); ++i){
                ++arr[i];
            } 
            point += k;
        }
        else if(dir == 'L'){
            for(int i = point-1; i>=(point-k); --i){
                ++arr[i];
            } 
            point -= k;
        }
    }
    int cnt = 0;
    for(int i = 1; i<=2000; i++){
        if(arr[i] >= 2) ++cnt;
    }
    cout << cnt;
    return 0;
}