#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; 
    cin >> n;
    int k = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k % 10 == 0) {
                k = 1;
            }
            cout << k % 10;
            k += 1;
        }
        cout << endl;
    }
    return 0;
}