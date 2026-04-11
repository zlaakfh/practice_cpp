#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int kor;
    int eng;
    int math;
};

int main() {
    int n;
    cin >> n;

    Person p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].kor >> p[i].eng >> p[i].math;
    }

    sort(p, p + n, [](Person a, Person b) {
        if (a.kor != b.kor) return a.kor > b.kor;
        if (a.eng != b.eng) return a.eng > b.eng;
        return a.math > b.math;
    });

    for (int i = 0; i < n; i++) {
        cout << p[i].name << " " << p[i].kor << " " << p[i].eng << " " << p[i].math << endl;
    }


    return 0;
}