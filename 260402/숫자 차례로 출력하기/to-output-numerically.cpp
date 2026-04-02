#include <iostream>

using namespace std;

void Asc(int n) {
    if (n == 0) return;
    Asc(n - 1);
    cout << n << " ";
}

void Desc(int n) {
    if (n == 0) return;
    cout << n << " ";
    Desc(n - 1);
}

int main() {
    int n;
    cin >> n;
    Asc(n);
    cout << endl;
    Desc(n);
    
    return 0;
}