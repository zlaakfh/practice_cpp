#include <iostream>
#include <algorithm>
using namespace std;

string s;
int q;

int main() {
    cin >> s >> q;

    for (int i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;
        if (query_type == 1) {
            char front = s[0];
            s.erase(0, 1);
            s += front;
        }
        else if (query_type == 2) {
            char back = s.back();
            s.pop_back();
            s = back + s;
        }
        else {
            reverse(s.begin(), s.end());
        }

        cout << s << endl;
    }

    // Please write your code here.

    return 0;
}
