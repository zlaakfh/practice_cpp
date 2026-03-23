#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";
    int i = 0;

    while (i < s.length()) {
        char cur = s[i];
        int cnt = 0;

        while (i < s.length() && cur == s[i]) {
            cnt++;
            i++;
        }

        result += cur;
        result += to_string(cnt);
    }

    cout << result.length() << endl;
    cout << result;


    return 0;
}
