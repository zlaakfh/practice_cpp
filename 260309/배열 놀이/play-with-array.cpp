#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, q;
    cin >> n >> q;

    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    
    for (int i = 0; i < q; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            int a;
            cin >> a;
            cout << arr[a] << endl;
        }
        else if (num == 2) {
            int b;
            cin >> b;
            int idx = 0;
            for (int j = 1; j <= n; j++) {
                if (b == arr[j]) {
                    idx = j;
                    break;
                }                
            }
            cout << idx << endl;
        }
        else if (num == 3) {
            int s, e;
            cin >> s >> e;
            for (int j = s; j <= e; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}