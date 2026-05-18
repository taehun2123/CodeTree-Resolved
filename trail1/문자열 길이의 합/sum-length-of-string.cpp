#include <bits/stdc++.h>
using namespace std;
string str[10];
int n, len, isA; 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;    
    for(int i = 0; i<n; i++){
        cin >> str[i];
    }
    for(auto st : str){
        len += st.length();
        if(st[0] == 'a') isA++;
    }
    cout << len << " " << isA;
    return 0;
}