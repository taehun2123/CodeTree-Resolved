#include <bits/stdc++.h>
using namespace std;
string str[21];
char key;
int cnt, len;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n = 0;
    cin >> n;
    for(int i = 0; i<n; i++) cin >> str[i];
    cin >> key;
    for(int i = 0; i<n; i++){
        if(str[i][0] == key){
            len += str[i].length(); cnt++;
        }
    }
    cout << cnt << " ";
    float result = static_cast<float>(len) / cnt;
    cout << fixed << setprecision(2) << result;
    return 0;
}