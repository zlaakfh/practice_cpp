#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    int arr[10][20];

    for (int game = 0; game < k; game++) {
        for (int i = 0; i < n; i++) {
            cin >> arr[game][i];
        }
    }

    int answer = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            if (a == b) continue;

            bool higher = true;

            for (int game = 0; game < k; game++) {
                int posA = 0;
                int posB = 0;

                for (int i = 0; i < n; i++) {
                    if (arr[game][i] == a) {
                        posA = i;
                    }
                    
                    if (arr[game][i] == b) {
                        posB = i;
                    }
                }

                if (posA > posB) {
                    higher = false;
                    break;
                }
            }
            if (higher) answer++;
        }
    }

    cout << answer;

    return 0;
}