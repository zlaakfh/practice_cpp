#include <iostream>

using namespace std;

int N;
int nums[1000];

int main() {
    cin >> N;
    int cnt[1001] = {0};
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        cnt[nums[i]] += 1;
    }
    
    int ans = -1;

    for (int i = 0; i < N; i++) {
        if (cnt[nums[i]] == 1 && nums[i] > ans) {
            ans = nums[i];
        }
    }

    cout << ans;

    // Please write your code here.

    return 0;
}
