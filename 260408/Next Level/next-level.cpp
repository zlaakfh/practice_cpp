#include <iostream>
#include <string>
using namespace std;

class User {
public :
    string id;
    int level;

    void print() {
        cout << "user " << id << " lv " << level << endl;
    }
};

int main() {
    User u1;
    u1.id = "codetree";
    u1.level = 10;

    User u2;
    cin >> u2.id >> u2.level;

    u1.print();
    u2.print();
    
    return 0;
}