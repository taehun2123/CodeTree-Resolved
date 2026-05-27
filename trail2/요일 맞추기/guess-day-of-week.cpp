#include <bits/stdc++.h>
using namespace std;
int m1, d1, m2, d2;
int mon_of_days[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[8] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int mm1 = 0, mm2 = 0;
    for(int i = 0; i<m1-1; i++){
        if(m1-1 == 0) break;
        mm1 += mon_of_days[i];
    }
    for(int i = 0; i<m2-1; i++){
        if(m2-1 == 0) break;
        mm2 += mon_of_days[i];
    }
    mm1 += d1;
    mm2 += d2;
    int set = 0;
    if(mm2-mm1 < 0 && abs(mm2-mm1)%7!=0) set = 7-(abs(mm2-mm1)%7);
    else set = abs(mm2-mm1)%7;
    cout << day[set];
    return 0;
}