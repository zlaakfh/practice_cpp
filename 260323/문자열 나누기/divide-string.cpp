#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[n];
    string b = "";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        b += arr[i];
    }

    for (int i = 0; i < b.length(); i+=5) {
        cout << b.substr(i, 5) << endl;
    }


    return 0;
}