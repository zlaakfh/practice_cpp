#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int answer = 0;

    sort(B.begin(), B.end());

    for (int i = 0; i <= n - m; i++) {
        vector<int> temp;

        for (int j = i; j < i + m; j++) {
            temp.push_back(A[j]);
        }

        sort(temp.begin(), temp.end());

        if (temp == B) {
            answer++;
        }
    }

    cout << answer;

    return 0;
}