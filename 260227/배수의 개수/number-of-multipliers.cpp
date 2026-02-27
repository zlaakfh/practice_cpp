#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int three = 0;
    int five = 0;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n % 3 == 0) {
            three++;
        }
        if (n % 5 == 0) {
            five++;
        }
    }
    cout << three << " " << five;


    return 0;
}