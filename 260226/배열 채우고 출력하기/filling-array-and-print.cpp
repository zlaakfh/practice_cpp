#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 9; i >= 0; i--) {
        cout << a[i];
    }
    return 0;
}