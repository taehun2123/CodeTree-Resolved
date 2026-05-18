#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string strList[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    vector<string> result;
    char chr;
    cin >> chr;
    for(int i = 0; i<5; i++){
        for(int j = 2; j<=3; j++){
            if(strList[i][j] == chr) result.push_back(strList[i]);
        }
    }
    for(auto str : result){
        cout << str << "\n";
    }
    cout << result.size();
    return 0;
}