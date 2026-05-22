#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    bool change = false;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '0') {
            a[i] = '1';
            change = true;
            break;
        }
    }

    if (!change) {
        a[a.size() - 1] = '0';
    }

    int answer = 0;

    for (int i = 0; i < a.size(); i++) {
        answer = answer * 2 + (a[i] - '0');
    }

    cout << answer;
    
    return 0;
}