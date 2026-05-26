#include <bits/stdc++.h>
using namespace std;
class Spy{
    public:
        string secretcode_;
        char meeting_point_;
        int time_;
        Spy(string secretcode, char meeting, int t){
            this->secretcode_ = secretcode;
            this->meeting_point_ = meeting;
            this->time_ = t;
        }
};

int main() {
    string secretcode;
    char meeting_point;
    int t;
    cin >> secretcode >> meeting_point >> t;
    Spy spy = Spy(secretcode, meeting_point, t);
    cout << "secret code : " << spy.secretcode_ << "\n";
    cout << "meeting point : " << spy.meeting_point_ << "\n";
    cout << "time : " << spy.time_;
    return 0;
}