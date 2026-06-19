#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x1[100], x2[100];

    for (int i = 0 ; i < n ; i++) {
        cin >> x1[i] >> x2[i];
    }

    int answer = 0;
    
    for (int i = 0; i < n; i++) {
        bool cross = false;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            if (x1[i] > x1[j] && x2[i] < x2[j]) {
                cross = true;
            }

            if (x1[i] < x1[j] && x2[i] > x2[j]) {
                cross = true;
            }
        }
        if (!cross) answer++;
    }

    cout << answer;
    
    return 0;
}