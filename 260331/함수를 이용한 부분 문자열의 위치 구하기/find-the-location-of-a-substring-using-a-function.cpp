#include <iostream>
#include <string>
using namespace std;

int FindIdx(string s, string target) {
    int idx = s.find(target);
    if (idx == string::npos) return -1;
    return idx;
}


int main() {
    string s, target;
    cin >> s;
    cin >> target;

    cout << FindIdx(s, target);

    return 0;
}