#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string cow;
    cin >> cow;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        if (cow[i] == 'C') {
            for (int j = i + 1; j < n; j++) {
                if (cow[j] == 'O') {
                    for (int k = j + 1; k < n; k++) {
                        if (cow[k] == 'W') {
                            answer++;
                        }
                    }
                }
            }
        }
    }

    cout << answer;
    return 0;
}