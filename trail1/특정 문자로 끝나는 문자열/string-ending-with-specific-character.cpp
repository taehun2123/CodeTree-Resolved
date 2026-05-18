#include <bits/stdc++.h>
using namespace std;
string str[10];
vector<string> result;
char key;
int main() {
    for(int i = 0; i<10; i++) cin >> str[i];
    cin >> key;
    for(int i = 0; i<10; i++){
        if(str[i][str[i].length()-1] == key) result.push_back(str[i]);
    }
    if(!result.empty()){
        for(auto st : result) cout << st << "\n";
    }
    else cout << "None";
    return 0;
}