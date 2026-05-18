#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;

    int answer = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') {
            for (int j = i + 1; j < a.size(); j++) {
                if (a[j] == ')') {
                    answer++;
                }
            }
        }
    }

    cout << answer;
    return 0;
}