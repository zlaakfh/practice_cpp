#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Handshake {
    int t;
    int x;
    int y;

};

int main() {
    int N, K, P, T;
    cin >> N >> K >> P >> T;

    vector<Handshake> arr(T);

    for (int i = 0; i < T; i++) {
        cin >> arr[i].t >> arr[i].x >> arr[i].y;
    }

    sort(arr.begin(), arr.end(), [](Handshake a, Handshake b) {
        return a.t < b.t;
    });

    vector<int> infected(N + 1, 0);
    vector<int> cnt(N + 1, 0);

    infected[P] = 1;

    for (int i = 0; i < T; i++) {
        int x = arr[i].x;
        int y = arr[i].y;

        bool xInfected = infected[x];
        bool yInfected = infected[y];

        if (xInfected && cnt[x] < K) {
            infected[y] = 1;
        }

        if (yInfected && cnt[y] < K) {
            infected[x] = 1;
        }

        if (xInfected) cnt[x]++;
        if (yInfected) cnt[y]++;
    }

    for (int i = 1; i <= N; i++) {
        cout << infected[i];
    }

    return 0;
}