#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char alpha;
    cin >> alpha;
    
    int n;

    if (alpha == 'z') {
        alpha = 'a';
        cout << alpha;
    }
    else {
        n = (int)alpha + 1;
        cout << (char)n;
    }
    return 0;
}