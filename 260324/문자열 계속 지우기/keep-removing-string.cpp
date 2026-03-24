#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    while (true) {
        int idx = a.find(b);
        if (idx == string::npos) {
            break;
        }
        a.erase(idx, b.length());
    }
    cout << a;

    
    return 0;
}
