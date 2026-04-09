#include <iostream>
#include <string>
using namespace std;

class Bomb {
public:
    string code;
    char color;
    int second;

    void print() {
        cout << "code : " << code << endl;
        cout << "color : " << color << endl;
        cout << "second : " << second << endl;
    }
};

int main() {
    Bomb b;
    cin >> b.code >> b.color >> b.second;

    b.print();

    
    return 0;
}