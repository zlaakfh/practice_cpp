#include <iostream>
#include <string>
using namespace std;

bool IsSame(string s) {
    int cnt = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i-1]) cnt++;
        if (cnt >= 2) return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    if (IsSame(s)) cout << "Yes";
    else cout << "No";

    return 0;
}