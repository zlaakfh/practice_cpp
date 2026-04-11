#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

class Person {
    public:
        string name;
        int h;
        double w;
};

int main() {
    Person p[5];

    for (int i = 0; i < 5; i++)   {
        cin >> p[i].name >> p[i].h >> p[i].w;
    }

    sort(p, p + 5, [](Person a, Person b) {
        return a.name < b.name;
    });

    cout << "name" << endl;
    for (int i = 0; i < 5; i++) {
        cout << p[i].name << " " << p[i].h <<  " " << fixed << setprecision(1) << p[i].w << endl;
    }

    sort(p, p + 5, [](Person a, Person b) {
        return a.h > b.h;
    });
    
    cout << endl;
    cout << "height" << endl;
    for (int i = 0; i < 5; i++) {
        cout << p[i].name << " " << p[i].h <<  " " << fixed << setprecision(1) << p[i].w << endl;
    }

    return 0;
}