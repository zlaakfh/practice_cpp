#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    /*
    i = 1   공백 4개    @ 1개
    i = 2   공백 2개    @ 2개
    i = 3   공백 0개    @ 3개
    ->      2 *(n - i)/ i
    i = 1   @ 2개
    i = 2   @ 1개 
    ->      n - i    
    */      

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "@ ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "@ ";
        }
        cout << endl;
    }
    return 0;
}