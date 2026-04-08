#include <iostream>
#include <string>
using namespace std;

class Member {
public :
    char codename;
    int score;

};

int main() {
    Member members[5];

    for (int i = 0; i < 5; i++) {
        cin >> members[i].codename >> members[i].score;
    }

    int minidx = 0;
    for (int i = 0; i < 5; i++) {
        if (members[i].score < members[minidx].score) {
            minidx = i;
        }
    }

    cout << members[minidx].codename << " " << members[minidx].score;
    return 0;
}