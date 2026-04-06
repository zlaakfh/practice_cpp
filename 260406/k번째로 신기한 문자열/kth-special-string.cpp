#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, k;
    string t;
    cin >> n >> k >> t;
    string arr[n];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        if (word.substr(0, t.length()) == t) {
            arr[cnt] = word;
            cnt++;
        }
    }
    
    sort(arr, arr + cnt);
    cout << arr[k-1];

    return 0;
}
