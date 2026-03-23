#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char a;

    cin >> str >> a;
    bool f = false;
    int idx;

    if (str.find(a) != string::npos) {
        idx = str.find(a);
        f = true;
    }

    if (!f) cout << "No";
    else cout << idx;

    return 0;
}