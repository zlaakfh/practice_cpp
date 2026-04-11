#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
        int h, w, num;
};

int main() {
    int n;
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i].h >> s[i].w;
        s[i].num = i + 1;
    }

    sort(s, s + n, [](Student a, Student b) {
        if (a.h != b.h) return a.h > b.h;
        if (a.w != b.w) return a.w > b.w;
        return a.num < b.num;
    });

    for (int i = 0; i < n; i++) {
        cout << s[i].h << " " << s[i].w << " " << s[i].num << endl;
    }

    return 0;
}