#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            int len = j - i + 1;

            if (sum % len != 0) continue;
            
            int avg = sum / len;
            bool exist = false;

            for (int k = i; k <= j; k++) {
                if (avg == arr[k]) {
                    exist = true;
                    break;
                }
            }
            if (exist) answer++;

        }
    }

    cout << answer;

    return 0;
}