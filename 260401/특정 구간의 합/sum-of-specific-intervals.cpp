#include <iostream>
using namespace std;
int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)     {
        cin >> arr[i];
    }
    int a1, a2;

    for (int i = 0; i < m; i++) {
        cin >> a1 >> a2;
        int total = 0;
        for (int j = a1; j <= a2; j++) {
            total += arr[j-1];
        }
        cout << total << endl;
        
    }
    return 0;
}