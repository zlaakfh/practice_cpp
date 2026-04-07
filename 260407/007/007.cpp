#include <iostream>
#include <string>
using namespace std;

class Mission {
    public:
        string secretCode;
        char meetingPoint;
        int time;

        void print() {
            cout << "secret code : " << secretCode << endl;
            cout << "meeting point : " << meetingPoint << endl;
            cout << "time : " << time << endl;
        }
};


int main() {
    Mission m;
    cin >> m.secretCode >> m.meetingPoint >> m.time;
    m.print();

    return 0;
}