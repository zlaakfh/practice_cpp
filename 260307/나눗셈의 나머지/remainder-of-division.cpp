#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int i, j;

    int arr[10] = {0, };

    while (true) {
        if (a <= 1) {
            break;
        }
        else {
            i = a / b;
            j = a % b; 
            arr[j] += 1;
            a = i;
        }
    }
    int total = 0;
    for (int i = 0; i < b; i++) {
        total += arr[i] * arr[i];
    }
    cout << total;
    return 0;
}