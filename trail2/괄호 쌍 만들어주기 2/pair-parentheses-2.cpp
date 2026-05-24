#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;

    int answer = 0;

    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] == '(' && a[i + 1] == '(') {
            for (int j = i + 2; j < a.size() - 1; j++) {
                if (a[j] == ')' && a[j + 1] == ')') {
                    answer++;    
                }    
            }   
        }
    }

    cout << answer;

    return 0;
}