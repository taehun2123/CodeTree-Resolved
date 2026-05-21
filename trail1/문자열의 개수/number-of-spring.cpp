#include <bits/stdc++.h>
using namespace std;
vector<string> strl;
string str;
int main() {
    while(true){
        cin >> str;
        if(str[0]-'0' == 0) break;
        strl.push_back(str);
    }
    cout << strl.size() << "\n";
    for(int i = 0; i<strl.size(); i++){ 
            if(i%2==0) 
                cout << strl[i] << "\n";
    }
    return 0;
}