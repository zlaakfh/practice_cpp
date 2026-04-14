#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;

    int result = 0;

    for (int i = 0; i < num.length(); i++) {
        result = result * 2 + (num[i] - '0');
    }
    
    cout << result;
    
    return 0;
}