#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int q;
    cin >> s >> q;

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int a, b;
            cin >> a >> b;
            swap(s[a-1], s[b-1]);
            cout << s << endl;;
        }
        else {
            char x, y;
            cin >> x >> y;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == x) s[i] = y;
            }
            cout << s << endl;;
        }

    }
    return 0;
}