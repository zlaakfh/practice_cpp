#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;
    for (int i = 1; i <= 19; i++) {
        for (int j = 1; j <= 19; j++) {
            if (j % 2 == 1) {
                if (j == 19) {
                    cout << i << " * " << j << " = " << i*j;    
                }
                else {
                    cout << i << " * " << j << " = " << i*j << " / ";
                    cnt += 1;
                }
            }
            else {
                cout << i << " * " << j << " = " << i*j;
                cnt += 1;
            }
            if (cnt % 2 == 0) {
                cout << endl;
            }
        }
    }
    return 0;
}