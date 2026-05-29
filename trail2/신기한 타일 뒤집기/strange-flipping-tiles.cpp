#include <bits/stdc++.h>
using namespace std;
int n;
int arr[200001];
// 1=w, 2=b;
int main() {
    cin >> n;
    int point = 100000;
    for(int i = 0; i<n; i++){
        int x = 0; char key;
        cin >> x >> key;
        if(key == 'R'){
            for(int i = point; i<point+x; i++){
                arr[i] = 2;
            }
            point += (x-1);
        }
        else if(key == 'L'){
            for(int i = point; i>point-x; i--){
                arr[i] = 1;
            }
            point -= (x-1);
        }
    }
    int w = 0, b = 0;
    for(int i = 0; i<=200000; i++){
        if(arr[i] == 1) w++;
        else if(arr[i] == 2) b++;
    }

    cout << w << " " << b;

    return 0;
}