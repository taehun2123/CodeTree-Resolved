#include <bits/stdc++.h>
using namespace std;
int n, k;
string key;
string arr[101];
string keyarr[101];
int main() {
    cin >> n >> k >> key;
    int j = 0;
    for(int i = 0; i<n; i++) cin >> arr[i];      
    for(int i = 0; i<n; i++) 
        if(arr[i].substr(0, key.length()) == key) 
            keyarr[j++] = arr[i];
    sort(keyarr, keyarr + j);
    cout << keyarr[k-1];
    
    
    return 0;
}