#include <iostream>

using namespace std;

int n, m;

/*
0,0 0,1 0,2 0,3 0,4
1,0 1,1 1,2 1,3 1,4
2,0 2,1 2,2 2,3 2,4
3,0 3,1 3,2 3,3 3,4
4,0 4,1 4,2 4,3 4,4

*/


int main() {
    cin >> n >> m;
    int arr[n][m] = {};
    int num = 1;

    for (int k = 0; k <= 8; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + j == k) {
                    arr[i][j] = num;
                    num++;
                }
            }   
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Please write your code here.

    return 0;
}
