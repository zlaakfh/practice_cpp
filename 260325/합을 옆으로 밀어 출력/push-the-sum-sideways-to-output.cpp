#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n, num;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        total += num;
    }
    
    string str = to_string(total);
    char front = str[0];
    str.erase(0, 1);
    str += front;

    cout << str;

    return 0;
}