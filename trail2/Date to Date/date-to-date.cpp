#include <bits/stdc++.h>
using namespace std;
int m1, d1, m2, d2;
int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int mon_of_day[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mm1 = 0; int mm2 = 0;
    for(int i = 0; i<m1-1; i++){
        mm1 += mon_of_day[i];
    }
    for(int i = 0; i<m2-1; i++){
        mm2 += mon_of_day[i];
    }
    int sum1 = mm1 + d1;
    int sum2 = mm2 + d2;
    cout << (sum2 - sum1)+1;
    return 0;
}