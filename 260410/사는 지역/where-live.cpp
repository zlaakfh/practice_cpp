#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    string address;
    string city;
};

int main() {
    int n;
    cin >> n;
    
    Person p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].address >> p[i].city;
    }

    int maxidx = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].name > p[maxidx].name) {
            maxidx = i;
        }
    }

    cout << "name " << p[maxidx].name << endl;
    cout << "addr " << p[maxidx].address << endl;
    cout << "city " << p[maxidx].city;
    
    
    
    return 0;
}