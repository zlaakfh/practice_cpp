#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a >> b;

    string str_a = "";
    string str_b = "";

    for (int i = 0; i < a.length(); i++) {
        if (isdigit((int)a[i])) {
            str_a += a[i];
        }
        else break;
    }
    for (int i = 0; i < b.length(); i++) {
        if (isdigit((int)b[i])) {
            str_b += b[i];
        }
        else break;
    }

    cout << stoi(str_a) + stoi(str_b);
    return 0;
}