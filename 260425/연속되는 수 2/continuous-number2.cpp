#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 1;
    int maxcnt = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            cnt++;
        }
            
        if (cnt > maxcnt) {
            maxcnt = cnt;
        }
            
    }
    cout << maxcnt;
    
    return 0;
}