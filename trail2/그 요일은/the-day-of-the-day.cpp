#include <bits/stdc++.h>
using namespace std;
int m1, d1, m2, d2;
int mon_of_days[13] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
string keyDay;
int main() {
    cin >> m1 >> d1 >> m2 >> d2 >> keyDay;
    int mm1 = 0, mm2 = 0;
    for(int i = 0; i<m1-1; i++){
        mm1 += mon_of_days[i];
    }
    for(int i = 0; i<m2-1; i++){
        mm2 += mon_of_days[i];
    }
    mm1 += d1;
    mm2 += d2;
    int cnt = abs(mm2-mm1)/7;
    int set = 0;
    if(mm2-mm1 > 0) set = (mm2-mm1)%7;
    if(set > 0){
        for(int i = 1; i<=set; i++){
            if(day[i] == keyDay) cnt++;
        }
    }
    cout << cnt;

    return 0;
}