#include <iostream>
#include <algorithm>
using namespace std;

class Element {
    public:
        int value, originalIdx;
};

int main() {
    int n;
    cin >> n;

    Element e[n];
    for (int i = 0; i < n; i++) {
        cin >> e[i].value;
        e[i].originalIdx = i;
    }

    sort(e, e + n, [](Element a, Element b) {
        if (a.value != b.value) return a.value < b.value;
        return a.originalIdx < b.originalIdx; 
    });
    
    int result[n];
    for (int i = 0; i < n; i++) {
        result[e[i].originalIdx] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }


    return 0;
}