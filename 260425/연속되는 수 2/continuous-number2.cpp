#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) 
            cnt++;
    }

    cout << cnt;
    
    return 0;
}