#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    string str = "";

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]))  {
            str += toupper(s[i]);
        }
    }
    cout << str;
    return 0;
}