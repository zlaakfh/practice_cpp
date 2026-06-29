#include <iostream>
#include <algorithm>
using namespace std;

int x, y;

int main() {
    cin >> x >> y;

    int answer = 0;
    
    for (int i = x; i <= y; i++) {
        int num = i;
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        answer = max(answer, sum);
    }

    cout << answer;
    
    return 0;
}