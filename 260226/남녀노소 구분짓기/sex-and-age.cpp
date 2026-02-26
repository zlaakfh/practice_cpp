#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int gender;
    int age;

    cin >> gender;
    cin >> age;

    if (gender == 0) {
        if (age >= 19) {
            cout << "MAN";
        }
        else {
            cout << "BOY";
        }
    }
    else {
        if (age >= 19) {
            cout << "WOMAN";
        }
        else {
            cout << "GIRL";
        }
    }
    return 0;
}