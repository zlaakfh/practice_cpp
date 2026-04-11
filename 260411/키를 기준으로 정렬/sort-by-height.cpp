#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int height;
    int weight;
};

int main() {
    int n;
    cin >> n;

    Person p[n];

    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].height >> p[i].weight;
    }

    sort(p, p + n, [](Person a, Person b) {
        return a.height < b.height;
    });
    
    
    
    for (int i = 0; i < n; i++) {
        cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;
    }
    
    return 0;
}