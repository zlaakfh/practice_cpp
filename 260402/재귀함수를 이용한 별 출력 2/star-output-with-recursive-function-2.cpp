#include <iostream>
using namespace std;

void Star(int n) {
    if (n == 0) return;
    for (int i = 0; i < n; i++){
        cout << "*" << " ";
    }
    cout << endl;
    Star(n - 1);
    for (int i = 0; i < n; i++) {
        cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    Star(n);
    return 0;
}