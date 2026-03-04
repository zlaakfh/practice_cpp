#include <iostream>
using namespace std;

/* 
n = 5

i = 1       1       
i = 2       5
i = 3       2       
i = 4       4
i = 5       3       
i = 6       3
i = 7       4
i = 8       2
i = 9       5
i = 10      1
i = odd -> 1, ... , N
i = even -> N, ... , 1
*/ 

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i = 1; i <= 2*n; i++) {
        int star;

        if (i % 2 == 1) {
            star = i/2 + 1;
        }
        else {
            star = n - i/2 + 1;
        }
        for (int j = 0; j < star; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}