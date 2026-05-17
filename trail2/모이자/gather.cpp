#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    int answer = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < n; j++) {
            sum += arr[j] * abs(i - j);
        }

        answer = min(answer, sum);
    }

    cout << answer;


    return 0;
}