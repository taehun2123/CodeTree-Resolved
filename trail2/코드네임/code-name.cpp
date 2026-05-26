#include <bits/stdc++.h>
using namespace std;
pair<int, char> user[6];
int main() {
    for(int i = 0; i<5; i++){
        cin >> user[i].second >> user[i].first;
    }

    sort(user, user + 5);
    cout << user[0].second << " " << user[0].first;

    return 0;
}