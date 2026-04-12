#include <iostream>
#include <algorithm>
using namespace std;

class Point {
    public:
        int x, y, num;

        int dist() {
            return abs(x) + abs(y);
        }
};

int main() {
    int n;
    cin >> n;

    Point p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].x >> p[i].y;
        p[i].num = i + 1;
    }

    sort(p, p + n, [](Point a, Point b) {
        if (a.dist() != b.dist()) return a.dist() < b.dist();
        return a.num < b.num;
    });

    for (int i = 0; i < n; i++) {
        cout << p[i].num << endl;
    }

    return 0;
}