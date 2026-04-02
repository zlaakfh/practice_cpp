#include <iostream>
#include <string>
using namespace std;

void Hello(int n) {
    if (n == 0) return;

    Hello(n  - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    int n;
    cin >> n;

    Hello(n);
    return 0;
}